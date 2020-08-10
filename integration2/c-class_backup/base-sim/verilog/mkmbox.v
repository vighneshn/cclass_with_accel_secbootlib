//
// Generated by Bluespec Compiler (build a026416)
//
// On Sat Aug  8 15:35:27 IST 2020
//
//
// Ports:
// Name                         I/O  size props
// mv_output                      O    70
// RDY_mv_output                  O     1 const
// CLK                            I     1 clock
// RST_N                          I     1 reset
// ma_inputs_in1                  I    64
// ma_inputs_in2                  I    64
// ma_inputs_funct3               I     3
// ma_inputs_word32               I     1
// EN_ma_inputs                   I     1
//
// No combinational paths from inputs to outputs
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

module mkmbox(CLK,
	      RST_N,

	      ma_inputs_in1,
	      ma_inputs_in2,
	      ma_inputs_funct3,
	      ma_inputs_word32,
	      EN_ma_inputs,

	      mv_output,
	      RDY_mv_output);
  parameter [63 : 0] hartid = 64'b0;
  input  CLK;
  input  RST_N;

  // action method ma_inputs
  input  [63 : 0] ma_inputs_in1;
  input  [63 : 0] ma_inputs_in2;
  input  [2 : 0] ma_inputs_funct3;
  input  ma_inputs_word32;
  input  EN_ma_inputs;

  // value method mv_output
  output [69 : 0] mv_output;
  output RDY_mv_output;

  // signals for module outputs
  wire [69 : 0] mv_output;
  wire RDY_mv_output;

  // ports of submodule div_
  wire [69 : 0] div__mv_output;
  wire [63 : 0] div__ma_inputs_in1, div__ma_inputs_in2;
  wire [2 : 0] div__ma_inputs_funct3;
  wire div__EN_ma_inputs, div__ma_inputs_word32;

  // ports of submodule mul_
  wire [69 : 0] mul__mv_output;
  wire [63 : 0] mul__ma_inputs_in1, mul__ma_inputs_in2;
  wire [2 : 0] mul__ma_inputs_funct3;
  wire mul__EN_ma_inputs, mul__RDY_mv_output, mul__ma_inputs_word32;

  // rule scheduling signals
  wire CAN_FIRE_ma_inputs, WILL_FIRE_ma_inputs;

  // declarations used by system tasks
  // synopsys translate_off
  reg TASK_testplusargs___d2;
  reg TASK_testplusargs___d3;
  reg TASK_testplusargs___d4;
  reg [63 : 0] v__h435;
  reg TASK_testplusargs___d11;
  reg TASK_testplusargs___d12;
  reg TASK_testplusargs___d13;
  reg [63 : 0] v__h285;
  reg ma_inputs_funct3_BIT_2_AND_TASK_testplusargs_O_ETC___d7;
  reg NOT_ma_inputs_funct3_BIT_2_0_AND_TASK_testplus_ETC___d16;
  // synopsys translate_on

  // action method ma_inputs
  assign CAN_FIRE_ma_inputs = 1'd1 ;
  assign WILL_FIRE_ma_inputs = EN_ma_inputs ;

  // value method mv_output
  assign mv_output =
	     { div__mv_output[5] ?
		 div__mv_output[69:6] :
		 mul__mv_output[69:6],
	       div__mv_output[5] || mul__mv_output[5],
	       div__mv_output[5] ?
		 div__mv_output[4:0] :
		 mul__mv_output[4:0] } ;
  assign RDY_mv_output = mul__RDY_mv_output ;

  // submodule div_
  mkrestoring_div #(.hartid(hartid)) div_(.CLK(CLK),
					  .RST_N(RST_N),
					  .ma_inputs_funct3(div__ma_inputs_funct3),
					  .ma_inputs_in1(div__ma_inputs_in1),
					  .ma_inputs_in2(div__ma_inputs_in2),
					  .ma_inputs_word32(div__ma_inputs_word32),
					  .EN_ma_inputs(div__EN_ma_inputs),
					  .mv_output(div__mv_output),
					  .RDY_mv_output());

  // submodule mul_
  mkcombo_mul mul_(.CLK(CLK),
		   .RST_N(RST_N),
		   .ma_inputs_funct3(mul__ma_inputs_funct3),
		   .ma_inputs_in1(mul__ma_inputs_in1),
		   .ma_inputs_in2(mul__ma_inputs_in2),
		   .ma_inputs_word32(mul__ma_inputs_word32),
		   .EN_ma_inputs(mul__EN_ma_inputs),
		   .mv_output(mul__mv_output),
		   .RDY_mv_output(mul__RDY_mv_output));

  // submodule div_
  assign div__ma_inputs_funct3 = ma_inputs_funct3 ;
  assign div__ma_inputs_in1 = ma_inputs_in1 ;
  assign div__ma_inputs_in2 = ma_inputs_in2 ;
  assign div__ma_inputs_word32 = ma_inputs_word32 ;
  assign div__EN_ma_inputs = EN_ma_inputs && ma_inputs_funct3[2] ;

  // submodule mul_
  assign mul__ma_inputs_funct3 = ma_inputs_funct3 ;
  assign mul__ma_inputs_in1 = ma_inputs_in1 ;
  assign mul__ma_inputs_in2 = ma_inputs_in2 ;
  assign mul__ma_inputs_word32 = ma_inputs_word32 ;
  assign mul__EN_ma_inputs = EN_ma_inputs && !ma_inputs_funct3[2] ;

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && ma_inputs_funct3[2])
	begin
	  TASK_testplusargs___d2 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && ma_inputs_funct3[2])
	begin
	  TASK_testplusargs___d3 = $test$plusargs("mmbox");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && ma_inputs_funct3[2])
	begin
	  TASK_testplusargs___d4 = $test$plusargs("l0");
	  #0;
	end
    ma_inputs_funct3_BIT_2_AND_TASK_testplusargs_O_ETC___d7 =
	ma_inputs_funct3[2] &&
	(TASK_testplusargs___d2 ||
	 TASK_testplusargs___d3 && TASK_testplusargs___d4);
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && ma_inputs_funct3[2])
	begin
	  v__h435 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs &&
	  ma_inputs_funct3_BIT_2_AND_TASK_testplusargs_O_ETC___d7)
	$write("[%10d", v__h435, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs &&
	  ma_inputs_funct3_BIT_2_AND_TASK_testplusargs_O_ETC___d7)
	$write("core:%2d ",
	       hartid,
	       "MBOX: To Div. Op1:%h Op2:%h sign:%b",
	       ma_inputs_in1,
	       ma_inputs_in2,
	       ma_inputs_in1[63]);
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs &&
	  ma_inputs_funct3_BIT_2_AND_TASK_testplusargs_O_ETC___d7)
	$write("\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && !ma_inputs_funct3[2])
	begin
	  TASK_testplusargs___d11 = $test$plusargs("fullverbose");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && !ma_inputs_funct3[2])
	begin
	  TASK_testplusargs___d12 = $test$plusargs("mmbox");
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && !ma_inputs_funct3[2])
	begin
	  TASK_testplusargs___d13 = $test$plusargs("l0");
	  #0;
	end
    NOT_ma_inputs_funct3_BIT_2_0_AND_TASK_testplus_ETC___d16 =
	!ma_inputs_funct3[2] &&
	(TASK_testplusargs___d11 ||
	 TASK_testplusargs___d12 && TASK_testplusargs___d13);
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs && !ma_inputs_funct3[2])
	begin
	  v__h285 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs &&
	  NOT_ma_inputs_funct3_BIT_2_0_AND_TASK_testplus_ETC___d16)
	$write("[%10d", v__h285, "] ");
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs &&
	  NOT_ma_inputs_funct3_BIT_2_0_AND_TASK_testplus_ETC___d16)
	$write("core:%2d ",
	       hartid,
	       "MBOX: To MUL. Op1:%h Op2:%h ",
	       ma_inputs_in1,
	       ma_inputs_in2);
    if (RST_N != `BSV_RESET_VALUE)
      if (EN_ma_inputs &&
	  NOT_ma_inputs_funct3_BIT_2_0_AND_TASK_testplus_ETC___d16)
	$write("\n");
  end
  // synopsys translate_on
endmodule  // mkmbox

