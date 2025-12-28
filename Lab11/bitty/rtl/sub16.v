module sub16(
	input wire [15:0] a_in,
	input wire [15:0] b_in, 
	input c_in, 
	output reg [15:0] res,
	output c_out
); 

	wire [15:0] tmp;
	wire carry1;
	wire carry2;

	add16 m1(a_in, ~b_in, 1'b1, tmp, carry1);
	add16 m2(tmp, {16{1'b0}}, c_in, res, carry2);
	assign c_out = (carry1 ^ carry2);

endmodule
