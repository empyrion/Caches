`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
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
module quad_port_ram(
 	input [31:0] data_a,
 	input [31:0] data_b,
	input [5:0] addr_a, addr_b, addr_c, addr_d,
	input we_a, we_b, clk,
	output reg [31:0] q_a, q_b, q_c, q_d
);

	// Declare the RAM variable
	reg [5:0] ram[31:0];
	
	// Port A - Read/Write
	always @ (posedge clk)
	begin
		if (we_a) 
		begin
      if (addr_a == 0)
        q_a <= 0;
      else
      begin
        ram[addr_a] <= data_a;
        q_a <= data_a;
      end
		end
		else 
		begin
      if (addr_a == 0)
        q_a <= 0;
      else
			  q_a <= ram[addr_a];
		end
	end
	
	// Port B - Read/Write
	always @ (posedge clk)
	begin
    if (we_b)
    begin
      if (addr_b == 0)
        q_b <= 0;
      else
      begin
        ram[addr_b] <= data_b;
        q_b <= data_b;
      end
    end
    else
    begin
      if (addr_b == 0)
        q_b <= 0;
      else
        q_b <= ram[addr_b];
    end
	end

	// Port C - Read Only
	always @ (posedge clk)
	begin
    if (addr_c == 0)
      q_c <= 0;
    else
      q_c <= ram[addr_c];
	end
	
	// Port C - Read Only
	always @ (posedge clk)
	begin
    if (addr_d == 0)
      q_d <= 0;
    else
      q_d <= ram[addr_d];
	end

endmodule
