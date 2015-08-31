`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        ADDA Ltd.
// Engineer:       Dragos-Ronald Rugescu
// 
// Create Date:    20:47:03 07/05/2015 
// Design Name: 
// Module Name:    quad_port_ram 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description:     Can write to port A, B can read from A, B, C, D
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module parameterized_quad_port_ram(data_a, data_b, addr_a, addr_b, addr_c, addr_d, we_a, we_b, clk, q_a, q_b, q_c, q_d);

  // Parameters
  parameter SIZE          = 4096;
  parameter ADDRESS_SPACE =   12;
  parameter DATA_SIZE     =   32;

  // Inputs
 	input [DATA_SIZE-1:0] data_a;
 	input [DATA_SIZE-1:0] data_b;
	input [ADDRESS_SPACE-1:0] addr_a, addr_b, addr_c, addr_d;
	input we_a, we_b, clk;
  
  // Outputs
	output reg [DATA_SIZE-1:0] q_a, q_b, q_c, q_d;

	// Declare the RAM variable
	reg [DATA_SIZE-1:0] ram[SIZE-1:0];
	
	// Port A - Read/Write
	always @ (posedge clk)
	begin
		if (we_a) 
		begin
        $display("PORT A: Latched value <<%d>> into location %d", data_a, addr_a);
        ram[addr_a] <= data_a;
		end
    $display("PORT A: Outputting value <<%d>> from location %d", ram[addr_a], addr_a);
    q_a <= ram[addr_a];
	end
	
	// Port B - Read/Write
	always @ (posedge clk)
	begin
    if (we_b)
    begin
        $display("PORT B: Latched value <<%d>> into location %d", data_b, addr_b);
        ram[addr_b] <= data_b;
    end
    $display("PORT B: Outputting value <<%d>> from location %d", ram[addr_b], addr_b);
    q_b <= ram[addr_b];
	end

	// Port C - Read Only
	always @ (posedge clk)
	begin
      $display("PORT C: Outputting value <<%d>> from location %d", ram[addr_c], addr_c);
      q_c <= ram[addr_c];
	end
	
	// Port C - Read Only
	always @ (posedge clk)
	begin
      $display("PORT D: Outputting value <<%d>> from location %d", ram[addr_d], addr_d);
      q_d <= ram[addr_d];
	end

endmodule
