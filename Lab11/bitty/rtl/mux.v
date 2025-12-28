module mux (
	input [15:0] in[7:0],
	input [2:0] sel,
	output reg [15:0] out
);

	assign out = in[sel];

endmodule
