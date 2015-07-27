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
	reg [ADDRESS_SPACE-1:0] ram[0:SIZE-1];
	
	// Port A - Read/Write
	always @ (posedge clk)
	begin
		if (we_a) 
		begin
        ram[addr_a] <= data_a;
        q_a <= data_a;
		end
		else 
		begin
			  q_a <= ram[addr_a];
		end
	end
	
	// Port B - Read/Write
	always @ (posedge clk)
	begin
    if (we_b)
    begin
        ram[addr_b] <= data_b;
        q_b <= data_b;
    end
    else
    begin
        q_b <= ram[addr_b];
    end
	end

	// Port C - Read Only
	always @ (posedge clk)
	begin
      q_c <= ram[addr_c];
	end
	
	// Port C - Read Only
	always @ (posedge clk)
	begin
      q_d <= ram[addr_d];
	end

endmodule
