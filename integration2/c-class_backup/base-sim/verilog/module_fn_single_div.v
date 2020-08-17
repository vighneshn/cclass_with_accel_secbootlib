//
// Generated by Bluespec Compiler (build a026416)
//
// On Tue Aug 11 13:43:41 IST 2020
//
//
// Ports:
// Name                         I/O  size props
// fn_single_div                  O   129
// fn_single_div_remainder        I    65
// fn_single_div_quotient         I    64
// fn_single_div_divisor          I    64
//
// Combinational paths from inputs to outputs:
//   (fn_single_div_remainder,
//    fn_single_div_quotient,
//    fn_single_div_divisor) -> fn_single_div
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

module module_fn_single_div(fn_single_div_remainder,
			    fn_single_div_quotient,
			    fn_single_div_divisor,
			    fn_single_div);
  // value method fn_single_div
  input  [64 : 0] fn_single_div_remainder;
  input  [63 : 0] fn_single_div_quotient;
  input  [63 : 0] fn_single_div_divisor;
  output [128 : 0] fn_single_div;

  // signals for module outputs
  wire [128 : 0] fn_single_div;

  // remaining internal signals
  wire [64 : 0] IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d11,
		SEXT_INV_fn_single_div_divisor_PLUS_1____d9,
		remainder__h70,
		remainder__h83,
		sub__h72,
		sub__h85,
		x__h24;
  wire [63 : 0] x__h172, x__h177;
  wire IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d15,
       fn_single_div_remainder_BITS_62_TO_0_CONCAT_fn_ETC___d4;

  // value method fn_single_div
  assign fn_single_div = { x__h24, x__h177 } ;

  // remaining internal signals
  assign IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d11 =
	     fn_single_div_remainder_BITS_62_TO_0_CONCAT_fn_ETC___d4 ?
	       remainder__h83 :
	       sub__h85 ;
  assign IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d15 =
	     { IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d11[62:0],
	       fn_single_div_quotient[62] } <
	     fn_single_div_divisor ;
  assign SEXT_INV_fn_single_div_divisor_PLUS_1____d9 =
	     { x__h172[63], x__h172 } ;
  assign fn_single_div_remainder_BITS_62_TO_0_CONCAT_fn_ETC___d4 =
	     { fn_single_div_remainder[62:0], fn_single_div_quotient[63] } <
	     fn_single_div_divisor ;
  assign remainder__h70 =
	     { IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d11[63:0],
	       fn_single_div_quotient[62] } ;
  assign remainder__h83 =
	     { fn_single_div_remainder[63:0], fn_single_div_quotient[63] } ;
  assign sub__h72 =
	     remainder__h70 + SEXT_INV_fn_single_div_divisor_PLUS_1____d9 ;
  assign sub__h85 =
	     remainder__h83 + SEXT_INV_fn_single_div_divisor_PLUS_1____d9 ;
  assign x__h172 = ~fn_single_div_divisor + 64'd1 ;
  assign x__h177 =
	     { fn_single_div_quotient[61:0],
	       !fn_single_div_remainder_BITS_62_TO_0_CONCAT_fn_ETC___d4,
	       !IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d15 } ;
  assign x__h24 =
	     IF_fn_single_div_remainder_BITS_62_TO_0_CONCAT_ETC___d15 ?
	       remainder__h70 :
	       sub__h72 ;
endmodule  // module_fn_single_div

