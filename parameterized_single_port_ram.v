`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:40 07/28/2015 
// Design Name: 
// Module Name:    parameterized_single_port_ram 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module parameterized_single_port_ram(clk, din, addr, we, dout);

  // Parameters
  parameter SIZE          = 4096;
  parameter ADDRESS_SPACE =   12;
  parameter DATA_SIZE     =   32;

  // Inputs
 	input [DATA_SIZE-1:0] din;
	input [ADDRESS_SPACE-1:0] addr;
	input we, clk;
  
  // Output
	output reg [DATA_SIZE-1:0] dout;

	// Declare the RAM variable
	reg [DATA_SIZE-1:0] ram[SIZE-1:0];
	
	// Read/Write
	always @ (posedge clk)
	begin
		if (we) 
		begin
        $display("RAM: Latched value <<%d>> into location %d", din, addr);
        ram[addr] <= din;
		end
    dout <= ram[addr];
    $display("RAM: Outputting value <<%d>> from location %d", ram[addr], addr);
	end
	
endmodule
