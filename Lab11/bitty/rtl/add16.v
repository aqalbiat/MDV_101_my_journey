module add16(
	input wire [15:0] a_in, 
	input wire [15:0] b_in,
	input wire c_in,
	output reg [15:0] sum, 
	output c_out
);

	// declaring the inner elements of the combinational logic
	wire [15:0] carry /*verilator split_var*/;

	// calculating the inner logic of the circuit
	
	add1 first_add(a_in[0], b_in[0], c_in, sum[0], carry[0]);

	genvar i;
	generate
		for (i = 1; i < 16; i = i + 1) begin : create_16_bit_adder
			add1 current_i(a_in[i], b_in[i], carry[i - 1], sum[i], carry[i]);
		end
	endgenerate

	assign c_out = carry[15];

endmodule
