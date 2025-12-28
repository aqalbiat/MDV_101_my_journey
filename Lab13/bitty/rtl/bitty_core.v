module bitty_core(
	input clk, 
	input run,
	input reset,
	input [15:0] instruction,	
	output [15:0] out_reg[8:0],
	output done,
	output parity
);

	wire [15:0] take_instr;
	wire [15:0] d_out[8:0];
	wire [15:0] mux_out;
	wire [15:0] alu_res;
	wire [15:0] alu_back;
	wire [7:0] en_reg;
	wire [3:0] mux_sel;
	wire [2:0] alu_sel;
	wire en_s;
	wire en_c;
	wire en_i;
	wire [15:0] alu_ops1;
	wire [15:0] imm_val;

	register R_i(instruction, reset, clk, en_i, take_instr);
	register R_s(mux_out, reset, clk, en_s, alu_ops1);
	register R_c(alu_res, reset, clk, en_c, alu_back);

	register R_0(alu_back, reset, clk, en_reg[0], d_out[0]);
	register R_1(alu_back, reset, clk, en_reg[1], d_out[1]);
	register R_2(alu_back, reset, clk, en_reg[2], d_out[2]);
	register R_3(alu_back, reset, clk, en_reg[3], d_out[3]);
	register R_4(alu_back, reset, clk, en_reg[4], d_out[4]);
	register R_5(alu_back, reset, clk, en_reg[5], d_out[5]);
	register R_6(alu_back, reset, clk, en_reg[6], d_out[6]);
	register R_7(alu_back, reset, clk, en_reg[7], d_out[7]);

	assign imm_val = {{8'b0}, instruction[12:5]};
	assign d_out[8] = imm_val;

	mux m(d_out, mux_sel, mux_out);

	alu calculate(alu_ops1, mux_out, alu_sel, alu_res);

	control_unit ctrl(take_instr, run, clk, reset, mux_sel, alu_sel, en_s, en_c, en_reg, en_i, done, parity);

	assign out_reg = d_out;

endmodule
