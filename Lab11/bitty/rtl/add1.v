module add1 (
	input a_in, 
	input b_in, 
	input c_in, 
	output sum, 
	output c_out
);

	// Declaring inner elements of the combinational logic
	wire half_sum1;
	wire half_sum2;
	wire carry1;
	wire carry2;

	// Calculating the values for the needed elements
	assign half_sum1 = (a_in ^ b_in);
	assign half_sum2 = (half_sum1 ^ c_in);
	assign carry1 = (a_in & b_in);
	assign carry2 = (half_sum1 & c_in);

	assign sum = half_sum2;
	assign c_out = (carry1 | carry2);

endmodule
