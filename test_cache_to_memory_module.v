`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:17:22 08/31/2015
// Design Name:   parameterized_cache_to_memory_module
// Module Name:   C:/Xilinx/Projects/Caches/test_cache_to_memory_module.v
// Project Name:  Caches
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parameterized_cache_to_memory_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_cache_to_memory_module;

	// Inputs
	reg clk;
	reg rsta;
	reg wea;
	reg [11:0] addr;
	reg [31:0] din;

	// Outputs
	wire hit;
	wire [31:0] dout;

  // All OK
  integer ALL_OK = 1;

	// Instantiate the Unit Under Test (UUT)
	parameterized_cache_to_memory_module uut (
		.clk(clk), 
		.rsta(rsta), 
		.wea(wea), 
		.addr(addr), 
		.din(din), 
		.hit(hit), 
		.dout(dout)
	);

  initial begin
    clk = 0;
    wea = 0;
    
		repeat(2) #10 clk = ~clk;

    forever #10 clk = ~clk;
  end

	initial begin
		// Initialize Inputs
		clk = 0;
		rsta = 0;
		wea = 0;
		addr = 0;
		din = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
    addr = 10;
    din = 123456;
    wea = 1;
    repeat(1) @(posedge clk);
    wea = 0;
    
    repeat(52) @(posedge clk);

    // Final test results
    if (ALL_OK == 1)
      $display("<<< OK >>> All tests passed!");
    else
      $display("<<< ERROR >>> Failed testing!");

    $finish;

	end
      
endmodule

