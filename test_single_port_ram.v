`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:47:29 07/28/2015
// Design Name:   parameterized_single_port_ram
// Module Name:   C:/Xilinx/Projects/Caches/test_single_port_ram.v
// Project Name:  Caches
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parameterized_single_port_ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_single_port_ram;

	// Inputs
	reg clk;
	reg [31:0] din;
	reg [11:0] addr;
	reg we;

	// Outputs
	wire [31:0] dout;

  // All OK
  integer ALL_OK = 1;

	// Instantiate the Unit Under Test (UUT)
	parameterized_single_port_ram #(4096, 12, 32) uut (
		.clk(clk), 
		.din(din), 
		.addr(addr), 
		.we(we), 
		.dout(dout)
	);

  initial begin
    clk = 0;
    we = 0;
    
		repeat(2) #10 clk = ~clk;

    forever #10 clk = ~clk;
  end

	initial begin
		// Initialize Inputs
		clk = 0;
		din = 0;
		addr = 0;
		we = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
    din = 123456789;
    addr = 4095;
    we = 1;
    @(negedge clk);
    we = 0;
    @(posedge clk);
    @(posedge clk);
    if (dout != 123456789)
    begin
      $display("ERROR! Result dout = %d should be %d", dout, 123456789);
      ALL_OK = 0;
    end
    
    #10;

    // Final test results
    if (ALL_OK == 1)
      $display("<<< OK >>> All tests passed!");
    else
      $display("<<< ERROR >>> Failed testing!");

    $finish;

	end
      
endmodule

