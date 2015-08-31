`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        ADDA Ltd.
// Engineer:       Dragos-Ronald Rugescu
// 
// Create Date:    21:22:35 07/28/2015 
// Design Name: 
// Module Name:    parameterized_cache_to_memory_module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description:    Tie cache to quad port RAM
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module parameterized_cache_to_memory_module(clk, rsta, wea, addr, din, hit, dout
    );

  // Parameters
  parameter SIZE          = 4096;
  parameter ADDRESS_SPACE =   12;
  parameter DATA_SIZE     =   32;

  // Inputs
  input clk;                            // Clock
  input rsta;                           // Reset
  input wea;                            // Write Enable
  input [ADDRESS_SPACE-1:0] addr;       // Max mem space is 31:0 in final circuit. 
                                        //   For now it is 11:0 in onboard ram
  input [DATA_SIZE-1:0] din;            // Data in
  
  // Wires from Cache Block
  wire flush;
  wire fetch;
  wire [DATA_SIZE-1:0] dout_cache;      // Cache data out
  
  // Wires from RAM Memory Block
  reg flush_ack;                       // Sends signal when it latches data (~50 cycles in DDR)
  reg fetch_ack;
  reg wea_ram;
  wire [DATA_SIZE-1:0] dout_RAM;        // RAM data out
  
  // Final outputs
  output wire hit;
  output reg [DATA_SIZE-1:0] dout;

  // Instantiate Cache block - 1024 words, 12 global address bits, 32 bits per word
	parameterized_direct_mapped_cache #(1024, 12, 32) cache_block (
		.clka(clk), 
		.rsta(rsta),
		.wea(wea), 
		.addra(addr), 
		.dina(din), 
    .fetch_ack(fetch_ack),
    .flush_ack(flush_ack),
		.douta(dout_cache),
    .flush(flush),
    .fetch(fetch),
    .hit(hit)
	);  
  
  // Instantiate RAM Memory Block - 4096 words, 12 address bits, 32 bits per word
  parameterized_single_port_ram #(4096,12,32) memory_block (
		.din(din), 
		.addr(addr), 
		.we(wea), 
		.clk(clka), 
		.dout(dout_RAM)
	);
  
  always @(posedge clk)
  begin
    if (wea == 0) // We are not writing but reading
    begin
      // If fetch = 1, cache awaits data from RAM
      if (fetch == 1)
      begin
        // Wait for 50 clks and then return RAM result
        repeat(50) @(posedge clk);
        dout <= dout_RAM;
        fetch_ack <= 1; // Signal to cache we have the data
        flush_ack <= 0;
      end
      else // fetch == 0, dout = dout_cache
      begin
        dout <= dout_cache;
        fetch_ack <= 0;
        flush_ack <= 0;
      end
    end
    
    else if (wea == 1) // We are writing to memory
    begin
      if (flush == 1) // The cache ordered a flush to RAM
      begin
        // Assume writing is also 50 cycles
        repeat(49) @(posedge clk);
        wea_ram = 1;
        @(posedge clk);
        wea_ram <= 0;
        flush_ack <= 1;
        fetch_ack <= 0;
        $display("Flush became 1.");
      end
      else
      begin
        flush_ack <= 0;
        fetch_ack <= 0;
        $display("wea = 1, flush = 0, clearing acks.");
      end
    end
  end

endmodule
