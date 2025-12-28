
module alu (
	input   wire 	 	carry_in,
	input   wire [15:0]	in_a,
	input 	wire [15:0]	in_b,
	input   wire [3:0]      select,
	input 	wire 		mode,
	output  reg 		carry_out,
	output  reg 		compare,
	output  reg [15:0]     alu_out 
);

	wire [15:0] out0;
	wire [15:0] out1;
	

	arithmetic option0(carry_in, in_a, in_b, select, out0, carry_out, compare);
	logical option1(in_a, in_b, select, out1);

	always @(*) begin
		case (mode)
			1'b0: assign alu_out = out0;
			1'b1: assign alu_out = out1;
		endcase
	end

endmodule

