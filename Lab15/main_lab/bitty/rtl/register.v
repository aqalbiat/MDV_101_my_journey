module register(
	input [15:0] d_in, 
	input reset, 
	input clk, 
	input en, 
	output reg [15:0] d_out
);

	always @(posedge clk) begin
		if (en && ~reset) begin
			d_out <= d_in;
		end else if (reset) begin
			d_out <= {16{1'b0}};
		end
	end

endmodule
