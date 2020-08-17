//
// Generated by Bluespec Compiler (build a026416)
//
// On Tue Aug 11 13:43:50 IST 2020
//
//
// Ports:
// Name                         I/O  size props
// RDY_ma_core_req                O     1
// mv_core_resp                   O    65
// RDY_mv_core_resp               O     1 const
// mav_fwd_req                    O    80 reg
// RDY_mav_fwd_req                O     1 reg
// mv_csr_misa                    O    64
// mv_frm                         O     3 reg
// mv_update_fs                   O     2 reg
// RDY_mv_update_fs               O     1 const
// RDY_ma_update_fflags           O     1 const
// mv_cacheenable                 O     3 reg
// RDY_mv_cacheenable             O     1 const
// mv_csr_misa_c                  O     1 reg
// RDY_mv_csr_misa_c              O     1 const
// CLK                            I     1 clock
// RST_N                          I     1 reset
// ma_core_req_req                I    80
// ma_update_fflags_flags         I     5
// EN_ma_core_req                 I     1
// EN_ma_update_fflags            I     1
// EN_mav_fwd_req                 I     1
//
// Combinational paths from inputs to outputs:
//   (ma_core_req_req, EN_ma_core_req, EN_mav_fwd_req) -> mv_core_resp
//   EN_mav_fwd_req -> RDY_ma_core_req
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

module mk_csr_grp2(CLK,
		   RST_N,

		   ma_core_req_req,
		   EN_ma_core_req,
		   RDY_ma_core_req,

		   mv_core_resp,
		   RDY_mv_core_resp,

		   EN_mav_fwd_req,
		   mav_fwd_req,
		   RDY_mav_fwd_req,

		   mv_csr_misa,

		   mv_frm,

		   mv_update_fs,
		   RDY_mv_update_fs,

		   ma_update_fflags_flags,
		   EN_ma_update_fflags,
		   RDY_ma_update_fflags,

		   mv_cacheenable,
		   RDY_mv_cacheenable,

		   mv_csr_misa_c,
		   RDY_mv_csr_misa_c);
  input  CLK;
  input  RST_N;

  // action method ma_core_req
  input  [79 : 0] ma_core_req_req;
  input  EN_ma_core_req;
  output RDY_ma_core_req;

  // value method mv_core_resp
  output [64 : 0] mv_core_resp;
  output RDY_mv_core_resp;

  // actionvalue method mav_fwd_req
  input  EN_mav_fwd_req;
  output [79 : 0] mav_fwd_req;
  output RDY_mav_fwd_req;

  // value method mv_csr_misa
  output [63 : 0] mv_csr_misa;

  // value method mv_frm
  output [2 : 0] mv_frm;

  // value method mv_update_fs
  output [1 : 0] mv_update_fs;
  output RDY_mv_update_fs;

  // action method ma_update_fflags
  input  [4 : 0] ma_update_fflags_flags;
  input  EN_ma_update_fflags;
  output RDY_ma_update_fflags;

  // value method mv_cacheenable
  output [2 : 0] mv_cacheenable;
  output RDY_mv_cacheenable;

  // value method mv_csr_misa_c
  output mv_csr_misa_c;
  output RDY_mv_csr_misa_c;

  // signals for module outputs
  wire [79 : 0] mav_fwd_req;
  wire [64 : 0] mv_core_resp;
  wire [63 : 0] mv_csr_misa;
  wire [2 : 0] mv_cacheenable, mv_frm;
  wire [1 : 0] mv_update_fs;
  wire RDY_ma_core_req,
       RDY_ma_update_fflags,
       RDY_mav_fwd_req,
       RDY_mv_cacheenable,
       RDY_mv_core_resp,
       RDY_mv_csr_misa_c,
       RDY_mv_update_fs,
       mv_csr_misa_c;

  // inlined wires
  reg [64 : 0] rg_resp_to_core_wget;
  reg [63 : 0] csr_op_res_wget;
  wire [129 : 0] csr_op_arg_wget;

  // register rg_bpuenable
  reg rg_bpuenable;
  wire rg_bpuenable_D_IN, rg_bpuenable_EN;

  // register rg_denable
  reg rg_denable;
  wire rg_denable_D_IN, rg_denable_EN;

  // register rg_fflags
  reg [4 : 0] rg_fflags;
  wire [4 : 0] rg_fflags_D_IN;
  wire rg_fflags_EN;

  // register rg_frm
  reg [2 : 0] rg_frm;
  wire [2 : 0] rg_frm_D_IN;
  wire rg_frm_EN;

  // register rg_fs
  reg [1 : 0] rg_fs;
  wire [1 : 0] rg_fs_D_IN;
  wire rg_fs_EN;

  // register rg_ienable
  reg rg_ienable;
  wire rg_ienable_D_IN, rg_ienable_EN;

  // register rg_misa_a
  reg rg_misa_a;
  wire rg_misa_a_D_IN, rg_misa_a_EN;

  // register rg_misa_c
  reg rg_misa_c;
  wire rg_misa_c_D_IN, rg_misa_c_EN;

  // register rg_misa_d
  reg rg_misa_d;
  wire rg_misa_d_D_IN, rg_misa_d_EN;

  // register rg_misa_f
  reg rg_misa_f;
  wire rg_misa_f_D_IN, rg_misa_f_EN;

  // register rg_misa_i
  reg rg_misa_i;
  wire rg_misa_i_D_IN, rg_misa_i_EN;

  // register rg_misa_m
  reg rg_misa_m;
  wire rg_misa_m_D_IN, rg_misa_m_EN;

  // register rg_misa_s
  reg rg_misa_s;
  wire rg_misa_s_D_IN, rg_misa_s_EN;

  // register rg_misa_u
  reg rg_misa_u;
  wire rg_misa_u_D_IN, rg_misa_u_EN;

  // register rg_mscratch
  reg [63 : 0] rg_mscratch;
  wire [63 : 0] rg_mscratch_D_IN;
  wire rg_mscratch_EN;

  // register rg_sscratch
  reg [63 : 0] rg_sscratch;
  wire [63 : 0] rg_sscratch_D_IN;
  wire rg_sscratch_EN;

  // ports of submodule ff_fwd_request
  wire [79 : 0] ff_fwd_request_D_IN, ff_fwd_request_D_OUT;
  wire ff_fwd_request_CLR,
       ff_fwd_request_DEQ,
       ff_fwd_request_EMPTY_N,
       ff_fwd_request_ENQ,
       ff_fwd_request_FULL_N;

  // rule scheduling signals
  wire CAN_FIRE_ma_core_req,
       CAN_FIRE_ma_update_fflags,
       CAN_FIRE_mav_fwd_req,
       WILL_FIRE_ma_core_req,
       WILL_FIRE_ma_update_fflags,
       WILL_FIRE_mav_fwd_req;

  // inputs to muxes for submodule ports
  wire MUX_rg_fflags_write_1__SEL_1;

  // remaining internal signals
  reg [63 : 0] IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66;
  wire [63 : 0] x__h1417,
		x__h2332,
		x__h2526,
		x__h2719,
		x__h2953,
		x__h2975,
		x__read_data__h3181;
  wire [7 : 0] x__h1281;
  wire [4 : 0] x__h3403;
  wire [3 : 0] x__h1306;
  wire [2 : 0] r1__read__h1319;
  wire [1 : 0] r1__read_BITS_1_TO_0___h3428, r1__read__h1321;
  wire NOT_ma_update_fflags_flags_OR_rg_fflags_6_49_E_ETC___d151,
       ma_core_req_req_BITS_79_TO_68_EQ_0x1_5_AND_NOT_ETC___d121,
       ma_core_req_req_BITS_79_TO_68_EQ_0x2_8_AND_NOT_ETC___d119;

  // action method ma_core_req
  assign RDY_ma_core_req = ff_fwd_request_FULL_N ;
  assign CAN_FIRE_ma_core_req = ff_fwd_request_FULL_N ;
  assign WILL_FIRE_ma_core_req = EN_ma_core_req ;

  // value method mv_core_resp
  assign mv_core_resp =
	     { EN_ma_core_req && rg_resp_to_core_wget[64],
	       x__read_data__h3181 } ;
  assign RDY_mv_core_resp = 1'd1 ;

  // actionvalue method mav_fwd_req
  assign mav_fwd_req = ff_fwd_request_D_OUT ;
  assign RDY_mav_fwd_req = ff_fwd_request_EMPTY_N ;
  assign CAN_FIRE_mav_fwd_req = ff_fwd_request_EMPTY_N ;
  assign WILL_FIRE_mav_fwd_req = EN_mav_fwd_req ;

  // value method mv_csr_misa
  assign mv_csr_misa =
	     { 2'd2,
	       36'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx /* unspecified value */ ,
	       5'd0,
	       rg_misa_u,
	       1'd0,
	       rg_misa_s,
	       5'd0,
	       rg_misa_m,
	       3'd0,
	       rg_misa_i,
	       2'd0,
	       rg_misa_f,
	       1'd0,
	       rg_misa_d,
	       rg_misa_c,
	       1'd0,
	       rg_misa_a } ;

  // value method mv_frm
  assign mv_frm = rg_frm ;

  // value method mv_update_fs
  assign mv_update_fs = rg_fs ;
  assign RDY_mv_update_fs = 1'd1 ;

  // action method ma_update_fflags
  assign RDY_ma_update_fflags = 1'd1 ;
  assign CAN_FIRE_ma_update_fflags = 1'd1 ;
  assign WILL_FIRE_ma_update_fflags = EN_ma_update_fflags ;

  // value method mv_cacheenable
  assign mv_cacheenable = { r1__read_BITS_1_TO_0___h3428, rg_ienable } ;
  assign RDY_mv_cacheenable = 1'd1 ;

  // value method mv_csr_misa_c
  assign mv_csr_misa_c = rg_misa_c ;
  assign RDY_mv_csr_misa_c = 1'd1 ;

  // submodule ff_fwd_request
  FIFOL1 #(.width(32'd80)) ff_fwd_request(.RST(RST_N),
					  .CLK(CLK),
					  .D_IN(ff_fwd_request_D_IN),
					  .ENQ(ff_fwd_request_ENQ),
					  .DEQ(ff_fwd_request_DEQ),
					  .CLR(ff_fwd_request_CLR),
					  .D_OUT(ff_fwd_request_D_OUT),
					  .FULL_N(ff_fwd_request_FULL_N),
					  .EMPTY_N(ff_fwd_request_EMPTY_N));

  // inputs to muxes for submodule ports
  assign MUX_rg_fflags_write_1__SEL_1 =
	     EN_ma_core_req &&
	     (ma_core_req_req[79:68] == 12'h001 ||
	      ma_core_req_req[79:68] == 12'h003) ;

  // inlined wires
  always@(ma_core_req_req or
	  rg_fflags or
	  rg_frm or
	  x__h1281 or
	  rg_sscratch or
	  rg_misa_u or
	  rg_misa_s or
	  rg_misa_m or
	  rg_misa_i or
	  rg_misa_f or
	  rg_misa_d or rg_misa_c or rg_misa_a or rg_mscratch or x__h1306)
  begin
    case (ma_core_req_req[79:68])
      12'h001: rg_resp_to_core_wget = { 60'h800000000000000, rg_fflags };
      12'h002: rg_resp_to_core_wget = { 62'h2000000000000000, rg_frm };
      12'h003: rg_resp_to_core_wget = { 57'h100000000000000, x__h1281 };
      12'h140: rg_resp_to_core_wget = { 1'd1, rg_sscratch };
      12'h301:
	  rg_resp_to_core_wget =
	      { 44'hC0000000000,
		rg_misa_u,
		1'd0,
		rg_misa_s,
		5'd0,
		rg_misa_m,
		3'd0,
		rg_misa_i,
		2'd0,
		rg_misa_f,
		1'd0,
		rg_misa_d,
		rg_misa_c,
		1'd0,
		rg_misa_a };
      12'h340: rg_resp_to_core_wget = { 1'd1, rg_mscratch };
      12'h800: rg_resp_to_core_wget = { 61'h1000000000000000, x__h1306 };
      default: rg_resp_to_core_wget = 65'd0;
    endcase
  end
  assign csr_op_arg_wget =
	     { ma_core_req_req[67:4],
	       IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66,
	       ma_core_req_req[3:2] } ;
  always@(ma_core_req_req or x__h2975)
  begin
    case (ma_core_req_req[79:68])
      12'h001, 12'h002, 12'h140, 12'h301, 12'h340: csr_op_res_wget = x__h2975;
      default: csr_op_res_wget = x__h2975;
    endcase
  end

  // register rg_bpuenable
  assign rg_bpuenable_D_IN = csr_op_res_wget[2] ;
  assign rg_bpuenable_EN =
	     EN_ma_core_req && ma_core_req_req[79:68] == 12'h800 ;

  // register rg_denable
  assign rg_denable_D_IN = csr_op_res_wget[1] ;
  assign rg_denable_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h800 ;

  // register rg_fflags
  assign rg_fflags_D_IN =
	     MUX_rg_fflags_write_1__SEL_1 ? csr_op_res_wget[4:0] : x__h3403 ;
  assign rg_fflags_EN =
	     EN_ma_core_req &&
	     (ma_core_req_req[79:68] == 12'h001 ||
	      ma_core_req_req[79:68] == 12'h003) ||
	     EN_ma_update_fflags &&
	     NOT_ma_update_fflags_flags_OR_rg_fflags_6_49_E_ETC___d151 ;

  // register rg_frm
  assign rg_frm_D_IN =
	     (ma_core_req_req[79:68] == 12'h002) ?
	       csr_op_res_wget[2:0] :
	       csr_op_res_wget[7:5] ;
  assign rg_frm_EN =
	     EN_ma_core_req &&
	     (ma_core_req_req[79:68] == 12'h002 ||
	      ma_core_req_req[79:68] == 12'h003) ;

  // register rg_fs
  assign rg_fs_D_IN = 2'b11 ;
  assign rg_fs_EN =
	     EN_ma_core_req && ma_core_req_req[79:68] != 12'h301 &&
	     ma_core_req_req[79:68] != 12'h340 &&
	     ma_core_req_req[79:68] != 12'h140 &&
	     ma_core_req_req_BITS_79_TO_68_EQ_0x1_5_AND_NOT_ETC___d121 ||
	     EN_ma_update_fflags &&
	     NOT_ma_update_fflags_flags_OR_rg_fflags_6_49_E_ETC___d151 ;

  // register rg_ienable
  assign rg_ienable_D_IN = csr_op_res_wget[0] ;
  assign rg_ienable_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h800 ;

  // register rg_misa_a
  assign rg_misa_a_D_IN = csr_op_res_wget[0] ;
  assign rg_misa_a_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_misa_c
  assign rg_misa_c_D_IN = csr_op_res_wget[2] ;
  assign rg_misa_c_EN =
	     EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 &&
	     (csr_op_res_wget[2] || ma_core_req_req[1:0] == 2'd0) ;

  // register rg_misa_d
  assign rg_misa_d_D_IN = csr_op_res_wget[3] ;
  assign rg_misa_d_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_misa_f
  assign rg_misa_f_D_IN = csr_op_res_wget[5] ;
  assign rg_misa_f_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_misa_i
  assign rg_misa_i_D_IN = csr_op_res_wget[8] ;
  assign rg_misa_i_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_misa_m
  assign rg_misa_m_D_IN = csr_op_res_wget[12] ;
  assign rg_misa_m_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_misa_s
  assign rg_misa_s_D_IN = csr_op_res_wget[18] ;
  assign rg_misa_s_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_misa_u
  assign rg_misa_u_D_IN = csr_op_res_wget[20] ;
  assign rg_misa_u_EN = EN_ma_core_req && ma_core_req_req[79:68] == 12'h301 ;

  // register rg_mscratch
  assign rg_mscratch_D_IN = csr_op_res_wget ;
  assign rg_mscratch_EN =
	     EN_ma_core_req && ma_core_req_req[79:68] == 12'h340 ;

  // register rg_sscratch
  assign rg_sscratch_D_IN = csr_op_res_wget ;
  assign rg_sscratch_EN =
	     EN_ma_core_req && ma_core_req_req[79:68] == 12'h140 ;

  // submodule ff_fwd_request
  assign ff_fwd_request_D_IN = ma_core_req_req ;
  assign ff_fwd_request_ENQ =
	     EN_ma_core_req && ma_core_req_req[79:68] != 12'h301 &&
	     ma_core_req_req[79:68] != 12'h340 &&
	     ma_core_req_req[79:68] != 12'h140 &&
	     ma_core_req_req[79:68] != 12'h001 &&
	     ma_core_req_req[79:68] != 12'h002 &&
	     ma_core_req_req[79:68] != 12'h003 &&
	     ma_core_req_req[79:68] != 12'h800 ;
  assign ff_fwd_request_DEQ = EN_mav_fwd_req ;
  assign ff_fwd_request_CLR = 1'b0 ;

  // remaining internal signals
  module_fn_csr_op instance_fn_csr_op_0(.fn_csr_op_writedata(csr_op_arg_wget[129:66]),
					.fn_csr_op_readdata(csr_op_arg_wget[65:2]),
					.fn_csr_op_op(csr_op_arg_wget[1:0]),
					.fn_csr_op(x__h2975));
  assign NOT_ma_update_fflags_flags_OR_rg_fflags_6_49_E_ETC___d151 =
	     x__h3403 != rg_fflags ;
  assign ma_core_req_req_BITS_79_TO_68_EQ_0x1_5_AND_NOT_ETC___d121 =
	     ma_core_req_req[79:68] == 12'h001 &&
	     rg_fflags != csr_op_res_wget[4:0] ||
	     ma_core_req_req[79:68] != 12'h001 &&
	     ma_core_req_req_BITS_79_TO_68_EQ_0x2_8_AND_NOT_ETC___d119 ;
  assign ma_core_req_req_BITS_79_TO_68_EQ_0x2_8_AND_NOT_ETC___d119 =
	     ma_core_req_req[79:68] == 12'h002 &&
	     rg_frm != csr_op_res_wget[2:0] ||
	     ma_core_req_req[79:68] == 12'h003 &&
	     x__h1281 != csr_op_res_wget[7:0] ;
  assign r1__read_BITS_1_TO_0___h3428 = { rg_bpuenable, rg_denable } ;
  assign r1__read__h1319 = { r1__read__h1321, rg_denable } ;
  assign r1__read__h1321 = { 1'd0, rg_bpuenable } ;
  assign x__h1281 = { rg_frm, rg_fflags } ;
  assign x__h1306 = { r1__read__h1319, rg_ienable } ;
  assign x__h1417 =
	     { 43'h40000000000,
	       rg_misa_u,
	       1'd0,
	       rg_misa_s,
	       5'd0,
	       rg_misa_m,
	       3'd0,
	       rg_misa_i,
	       2'd0,
	       rg_misa_f,
	       1'd0,
	       rg_misa_d,
	       rg_misa_c,
	       1'd0,
	       rg_misa_a } ;
  assign x__h2332 = { 59'd0, rg_fflags } ;
  assign x__h2526 = { 61'd0, rg_frm } ;
  assign x__h2719 = { 56'd0, x__h1281 } ;
  assign x__h2953 = { 60'd0, x__h1306 } ;
  assign x__h3403 = ma_update_fflags_flags | rg_fflags ;
  assign x__read_data__h3181 =
	     EN_ma_core_req ? rg_resp_to_core_wget[63:0] : 64'd0 ;
  always@(ma_core_req_req or
	  x__h2953 or
	  x__h2332 or
	  x__h2526 or x__h2719 or rg_sscratch or x__h1417 or rg_mscratch)
  begin
    case (ma_core_req_req[79:68])
      12'h001:
	  IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 = x__h2332;
      12'h002:
	  IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 = x__h2526;
      12'h003:
	  IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 = x__h2719;
      12'h140:
	  IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 =
	      rg_sscratch;
      12'h301:
	  IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 = x__h1417;
      12'h340:
	  IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 =
	      rg_mscratch;
      default: IF_ma_core_req_req_BITS_79_TO_68_EQ_0x301_THEN_ETC___d66 =
		   x__h2953;
    endcase
  end

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        rg_bpuenable <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_denable <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_fflags <= `BSV_ASSIGNMENT_DELAY 5'd0;
	rg_frm <= `BSV_ASSIGNMENT_DELAY 3'd0;
	rg_fs <= `BSV_ASSIGNMENT_DELAY 2'd0;
	rg_ienable <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_a <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_c <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_d <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_f <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_i <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_m <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_s <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_misa_u <= `BSV_ASSIGNMENT_DELAY 1'd1;
	rg_mscratch <= `BSV_ASSIGNMENT_DELAY 64'd0;
	rg_sscratch <= `BSV_ASSIGNMENT_DELAY 64'd0;
      end
    else
      begin
        if (rg_bpuenable_EN)
	  rg_bpuenable <= `BSV_ASSIGNMENT_DELAY rg_bpuenable_D_IN;
	if (rg_denable_EN)
	  rg_denable <= `BSV_ASSIGNMENT_DELAY rg_denable_D_IN;
	if (rg_fflags_EN) rg_fflags <= `BSV_ASSIGNMENT_DELAY rg_fflags_D_IN;
	if (rg_frm_EN) rg_frm <= `BSV_ASSIGNMENT_DELAY rg_frm_D_IN;
	if (rg_fs_EN) rg_fs <= `BSV_ASSIGNMENT_DELAY rg_fs_D_IN;
	if (rg_ienable_EN)
	  rg_ienable <= `BSV_ASSIGNMENT_DELAY rg_ienable_D_IN;
	if (rg_misa_a_EN) rg_misa_a <= `BSV_ASSIGNMENT_DELAY rg_misa_a_D_IN;
	if (rg_misa_c_EN) rg_misa_c <= `BSV_ASSIGNMENT_DELAY rg_misa_c_D_IN;
	if (rg_misa_d_EN) rg_misa_d <= `BSV_ASSIGNMENT_DELAY rg_misa_d_D_IN;
	if (rg_misa_f_EN) rg_misa_f <= `BSV_ASSIGNMENT_DELAY rg_misa_f_D_IN;
	if (rg_misa_i_EN) rg_misa_i <= `BSV_ASSIGNMENT_DELAY rg_misa_i_D_IN;
	if (rg_misa_m_EN) rg_misa_m <= `BSV_ASSIGNMENT_DELAY rg_misa_m_D_IN;
	if (rg_misa_s_EN) rg_misa_s <= `BSV_ASSIGNMENT_DELAY rg_misa_s_D_IN;
	if (rg_misa_u_EN) rg_misa_u <= `BSV_ASSIGNMENT_DELAY rg_misa_u_D_IN;
	if (rg_mscratch_EN)
	  rg_mscratch <= `BSV_ASSIGNMENT_DELAY rg_mscratch_D_IN;
	if (rg_sscratch_EN)
	  rg_sscratch <= `BSV_ASSIGNMENT_DELAY rg_sscratch_D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    rg_bpuenable = 1'h0;
    rg_denable = 1'h0;
    rg_fflags = 5'h0A;
    rg_frm = 3'h2;
    rg_fs = 2'h2;
    rg_ienable = 1'h0;
    rg_misa_a = 1'h0;
    rg_misa_c = 1'h0;
    rg_misa_d = 1'h0;
    rg_misa_f = 1'h0;
    rg_misa_i = 1'h0;
    rg_misa_m = 1'h0;
    rg_misa_s = 1'h0;
    rg_misa_u = 1'h0;
    rg_mscratch = 64'hAAAAAAAAAAAAAAAA;
    rg_sscratch = 64'hAAAAAAAAAAAAAAAA;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mk_csr_grp2

