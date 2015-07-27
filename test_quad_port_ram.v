`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:48:21 07/05/2015
// Design Name:   triple_block_ram
// Module Name:   C:/Xilinx/Projects/CPU_S1/S1/test_triple_block_ram.v
// Project Name:  S1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: triple_block_ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_quad_port_ram;

	// Inputs
	reg [31:0] data_a;
	reg [31:0] data_b;
	reg [11:0] addr_a;
	reg [11:0] addr_b;
	reg [11:0] addr_c;
  reg [11:0] addr_d;
	reg we_a;
	reg we_b;
	reg clk;

	// Outputs
	wire [31:0] q_a;
	wire [31:0] q_b;
	wire [31:0] q_c;
	wire [31:0] q_d;

  // All OK
  integer ALL_OK = 1;

	// Instantiate the Unit Under Test (UUT)
	parameterized_quad_port_ram #(4096,12,32) uut (
		.data_a(data_a), 
		.data_b(data_b), 
		.addr_a(addr_a), 
		.addr_b(addr_b), 
		.addr_c(addr_c), 
		.addr_d(addr_d), 
		.we_a(we_a), 
		.we_b(we_b), 
		.clk(clk), 
		.q_a(q_a), 
		.q_b(q_b), 
		.q_c(q_c),
		.q_d(q_d)
	);

  initial begin
    clk = 0;
    we_a = 0;
    we_b = 0;
    
		repeat(2) #10 clk = ~clk;

    forever #15 clk = ~clk;
  end

	initial begin
		// Initialize Inputs
		data_a = 0;
		data_b = 0;
		addr_a = 0;
		addr_b = 0;
		addr_c = 0;
		addr_d = 0;
		we_a = 0;
		we_b = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
    data_a = 11;
    addr_a = 10;
    addr_b = 20;
    addr_c = 30;
    we_a = 1;
    @(posedge clk);
    we_a = 0;
    @(posedge clk);
    if ((q_a != 11) || (q_b != 22) || (q_c != 33))
    begin
      $display("ERROR! Result a,b,c = %d,%d,%d should be %d,%d,%d", q_a, q_b, q_c, 11, 22, 33);
      ALL_OK = 0;
    end
    
    addr_a = 1;
    addr_b = 2;
    addr_c = 3;
    @(posedge clk);
    #1; // Timing necessary after clk for signals to propagate and results to come out
    if ((q_a != 0) || (q_b != 0) || (q_c != 0))
    begin
      $display("ERROR! Result a,b,c = %d,%d,%d should be %d,%d,%d", q_a, q_b, q_c, 0, 0, 0);
      ALL_OK = 0;
    end

    data_a = 111;
    data_b = 2100100100;
    addr_a = 0;
    addr_b = 22;
    addr_c = 0;
    we_a = 1;
    we_b = 1;
    @(posedge clk);
    we_b = 0;
    addr_a = 30;
    data_a = 12345;
    #1;
    we_a = 1;
    @(posedge clk);
    we_a = 0;
    #1;
    addr_a = 0;
    addr_c = 30;
    @(posedge clk);
    if ((q_a != 111) || (q_b != 2100100100) || (q_c != 12345))
    begin
      $display("ERROR! Result a,b,c = %d,%d,%d should be %d,%d,%d", q_a, q_b, q_c, 111, 2100100100, 12345);
      ALL_OK = 0;
    end

    // Final test results
    if (ALL_OK == 1)
      $display("<<< OK >>> All tests passed!");
    else
      $display("<<< ERROR >>> Failed testing!");

    $finish;

	end
      
endmodule

