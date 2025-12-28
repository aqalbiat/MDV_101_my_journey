
module alu (
	input   wire [15:0]	in_a,
	input 	wire [15:0]	in_b,
	input   wire [2:0]      select,
	output  reg [15:0]     alu_out 
);

	wire [15:0] ops [7:0];

	assign ops[0] = in_a + in_b;
	assign ops[1] = in_a - in_b;
	assign ops[2] = (in_a & in_b);
	assign ops[3] = (in_a | in_b);
	assign ops[4] = (in_a ^ in_b);
	assign ops[5] = ((in_b < 16'd16) ? (in_a << in_b) : 16'd0);
	assign ops[6] = ((in_b < 16'd16) ? (in_a >> in_b) : 16'd0);
	assign ops[7] = (in_a == in_b ? 16'd0 : (in_a > in_b ? 16'd1 : 16'd2));

	assign alu_out = ops[select];

endmodule

