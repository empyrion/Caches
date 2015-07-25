`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:29:42 07/06/2015 
// Design Name: 
// Module Name:    unified_cache_1024_words 
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
module unified_cache_1024_words(clka, rsta, wea, addra, dina, fetch_ack, flush_ack, douta, flush, fetch, hit);

  // Size parameter
  parameter size = 1024;
  parameter address_space = 12;
  parameter data_size = 32;

  // Inputs
  input clka;                          // Clock
  input rsta;                          // Reset
  input [0:0] wea;                     // Write Enable
  input [address_space-1:0] addra;     // we only have 9:0 addresses in, but max mem space is 31:0
                                       // in final circuit. For now it is 11:0 in onboard ram
  input [data_size-1:0] dina;          // Data in
  input fetch_ack;                     // When RAM find information and places it on the data b
  input flush_ack;                     // When RAM acknowledges the receipt of data

  // Outputs
  output reg [data_size-1:0] douta;    // Data Out
  output reg flush;                    // Signal sent to RAM
  output reg fetch;
  output reg hit;

  // The actual memory
  reg [address_space + data_size - 1:0]    mem [0:size-1]; // 12b address tag + 32b data
  
  parameter STATE_FLUSHING = 1;
  parameter STATE_FETCHING = 2;
  parameter STATE_NORMAL   = 3;
  reg [2:0] STATE = STATE_NORMAL;

  // At clock
  always @(posedge clka)
  begin
  
    if ((STATE == STATE_FLUSHING) & flush_ack)  // If main RAM acknowledges receipt of data
    begin
      hit <= 1;
      flush <= 0;
      STATE <= STATE_NORMAL;
      $display("Flush acknowledged. Enter normal state.");
    end
    
    if ((STATE == STATE_FETCHING) & fetch_ack)  // If main RAM gives us data
    begin
      // Write it into cache and output it
      mem[addra[9:0]] <= {addra, dina};
      douta <= mem[addra[9:0]][31:0];
      hit <= 1;
      fetch <= 0;
      STATE <= STATE_NORMAL;
      $display("Fetch acknowledged. Enter normal state. Outputting data.");
    end
    
    if (STATE == STATE_NORMAL)
    begin
      // Do the read
      if (rsta && !wea)
      begin
        douta <= 0;
        hit <= 0;
        flush <= 0;
        fetch <= 0;
        $display("Reset.");
      end
      
      if (!rsta && !wea)
      begin
        if (mem[addra[9:0]][43:32] == addra)
        begin
          // If we have that address in the cache it's a hit
          douta <= mem[addra[9:0]][31:0];
          hit <= 1;
          $display("Cache hit. Outputting data.");
        end
        else
        begin
          // If we don't have that address we need to fetch it
          hit <= 0;
          fetch <= 1;
          $display("Cache miss. Fetching data...");
          STATE <= STATE_FETCHING;
        end
      end
       
      // The write is flushed immediately to the RAM
      if (!rsta && wea) 
      begin
        mem[addra[9:0]] <= {addra, dina};
        douta <= mem[addra[9:0]][31:0];
        flush <= 1;
        hit <= 0;
        $display("Writing to cache and flushing.");
        STATE <= STATE_FLUSHING;
      end
    end
  end

endmodule
