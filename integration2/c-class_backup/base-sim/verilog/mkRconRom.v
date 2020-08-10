//
// Generated by Bluespec Compiler (build a026416)
//
// On Sat Aug  8 15:34:56 IST 2020
//
//
// Ports:
// Name                         I/O  size props
// read                           O     8
// CLK                            I     1 unused
// RST_N                          I     1 unused
// read_addr                      I     4
//
// Combinational paths from inputs to outputs:
//   read_addr -> read
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkRconRom(CLK,
		 RST_N,

		 read_addr,
		 read);
  input  CLK;
  input  RST_N;

  // value method read
  input  [3 : 0] read_addr;
  output [7 : 0] read;

  // signals for module outputs
  reg [7 : 0] read;

  // value method read
  always@(read_addr)
  begin
    case (read_addr)
      4'd0: read = 8'h01;
      4'd1: read = 8'h02;
      4'd2: read = 8'h04;
      4'd3: read = 8'h08;
      4'd4: read = 8'h10;
      4'd5: read = 8'h20;
      4'd6: read = 8'h40;
      4'd7: read = 8'h80;
      4'd8: read = 8'h1B;
      default: read = 8'h36;
    endcase
  end
endmodule  // mkRconRom

