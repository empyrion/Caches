`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:30:34 07/06/2015
// Design Name:   unified_cache_1024_words
// Module Name:   C:/Xilinx/Projects/CPU_S1/S1/test_unified_cache.v
// Project Name:  S1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: unified_cache_1024_words
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_unified_cache;

	// Inputs
	reg clka;
	reg rsta;
	reg [0:0] wea;
	reg [11:0] addra;
	reg [31:0] dina;
  reg fetch_ack;
  reg flush_ack;

	// Outputs
	wire [31:0] douta;
  wire flush;
  wire fetch;
  wire hit;

  // All OK
  integer ALL_OK = 1;

	// Instantiate the Unit Under Test (UUT)
  //(clka, rsta, wea, addra, dina, fetch_ack, flush_ack, douta, flush, fetch, hit);
  // Cache 1024 words of 32 bits, 12 bits of max address associated
	unified_cache_n_words #(1024, 12, 32) uut (
		.clka(clka), 
		.rsta(rsta), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
    .fetch_ack(fetch_ack),
    .flush_ack(flush_ack),
		.douta(douta),
    .flush(flush),
    .fetch(fetch),
    .hit(hit)
	);

  initial begin
    clka = 0;

		repeat(2) #10 clka = ~clka;

    forever #10 clka = ~clka;
  end

	initial begin
		// Initialize Inputs
		clka = 0;
		rsta = 1;
		wea = 0;
		addra = 0;
		dina = 0;
    fetch_ack = 0;
    flush_ack = 0;
    
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
    // Write a value to cache
    rsta = 0;
    addra = 0;
    dina = 2123000123;
    wea = 1;
    repeat(1) @(posedge clka);  // Simulate a RAM clock cycle
    wea = 0;                    // Disable Write Enable
    repeat(10) @(posedge clka); // simulate a few RAM clock cycles
    flush_ack = 1;              // RAM signals flush ack
    repeat(1) @(posedge clka);  // Wait one more cycle
    flush_ack = 0;              // RAM no longer signals
    #40;
    repeat(10) @(posedge clka);
    if (douta != 2123000123)
    begin
      $display("ERROR! Result = %d, should be %d", douta, 2123000123);
      ALL_OK = 0;
    end
    
    // Simulate getting a value from main RAM
    addra = 1000;
    dina = 1212121; // Doesn't matter
    wea = 0;
    repeat(10) @(posedge clka); // Simulate a few RAM clock cycles
    fetch_ack = 1;              // RAM signals fetch ack
    dina = 1002003009;          //    and provides data
    repeat(1) @(posedge clka);  // Wait one more cycle
    fetch_ack = 0;              // RAM no longer signals
    repeat(10) @(posedge clka);
    if (douta != 1002003009)
    begin
      $display("ERROR! Result = %d, should be %d", douta, 1002003009);
      ALL_OK = 0;
    end    
    
    // Simulate getting a value from cache with a cache hit
    addra = 0;
    dina = 1212121; // Doesn't matter
    wea = 0;
    repeat(2) @(posedge clka); // Simulate a pipeline clock cycle
    if (douta != 2123000123)
    begin
      $display("ERROR! Result = %d, should be %d", douta, 2123000123);
      ALL_OK = 0;
    end    

    // Write another value to cache to replace the previous one in address 1024->0
    rsta = 0;
    addra = 1024;
    dina = 998;
    wea = 1;
    repeat(1) @(posedge clka);  // Simulate a RAM clock cycle
    wea = 0;                    // Disable Write Enable
    repeat(10) @(posedge clka); // simulate a few RAM clock cycles
    flush_ack = 1;              // RAM signals flush ack
    repeat(1) @(posedge clka);  // Wait one more cycle
    flush_ack = 0;              // RAM no longer signals
    #40;
    repeat(10) @(posedge clka);
    if (douta != 998)
    begin
      $display("ERROR! Result = %d, should be %d", douta, 998);
      ALL_OK = 0;
    end

    // Simulate getting a value from cache with a cache hit - get address 0, should MISS
    addra = 0;
    dina = 1212121; // Doesn't matter
    wea = 0;
    repeat(2) @(posedge clka); // Simulate a pipeline clock cycle
    if (fetch != 1)
    begin
      $display("ERROR! Result = %d, should be %d", fetch, 1);
      ALL_OK = 0;
    end    

    // End
    repeat(5) @(posedge clka);

    // Final test results
    if (ALL_OK == 1)
      $display("<<< OK >>> All tests passed!");
    else
      $display("<<< ERROR >>> Failed testing!");

    $finish;
    
	end
      
endmodule

