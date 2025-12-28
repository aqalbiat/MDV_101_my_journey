module mux (
	input [15:0] in[8:0],
	input [3:0] sel,
	output reg [15:0] out
);

	always @(*) begin
		if (sel > 4'd8) begin
			out = 16'd0;
		end else begin
			out = in[sel];
		end
	end

endmodule
