
module arithmetic (
	input  wire 		carry_in,
	input  wire [15:0]	in_a,
	input  wire [15:0]      in_b,
	input  wire [3:0]       select,
	output reg  [15:0]      arith_out,
	output reg              carry_out,
	output reg		compare
);

	wire [15:0] carry;

	wire [15:0] calc1;
	wire [15:0] calc2;
	wire [15:0] calc3;
	wire [15:0] calc4;
	wire [15:0] calc5;
	wire [15:0] calc6;
	wire [15:0] calc7;
	wire [15:0] calc8;
	wire [15:0] calc9;
	wire [15:0] calc10;
	wire [15:0] calc11;
	wire [15:0] calc12;
	wire [15:0] calc13;
	wire [15:0] calc14;
	wire [15:0] calc15;
	wire [15:0] calc16;

	// computation #1
	add16 c1(in_a, {16{1'b0}}, carry_in, calc1, carry[0]);
	
	// computation #2
	add16 c2((in_a | in_b), {16{1'b0}}, carry_in, calc2, carry[1]);
	
	// computation #3
	add16 c3((in_a | (~in_b)), {16{1'b0}}, carry_in, calc3, carry[2]);

	// computation #4
	add16 c4({16{1'b1}}, {16{1'b0}}, carry_in, calc4, carry[3]);

	// computation #5
	add16 c5((in_a | (in_a & (~in_b))), {16{1'b0}}, carry_in, calc5, carry[4]);	

	// computation #6
	add16 c6((in_a | in_b), (in_a & (~in_b)), carry_in, calc6, carry[5]);

	// computation #7
	wire [15:0] sub_buf;
	wire carry_tmp1;
	wire carry_tmp2;
	sub16 c7p1(in_a, in_b, carry_in, sub_buf, carry_tmp1);
	sub16 c7p2(sub_buf, {{15{1'b0}}, {1'b1}}, 1'b0, calc7, carry_tmp2);
	assign carry[6] = (carry_tmp1 ^ carry_tmp2);

	// computation #8
	sub16 c8((in_a & (~in_b)), {{15{1'b0}}, {1'b1}}, carry_in, calc8, carry[7]);

	// computation #9
	add16 c9(in_a, (in_a & in_b), carry_in, calc9, carry[8]);
	
	// computation #10
	add16 c10(in_a, in_b, carry_in, calc10, carry[9]);

	// computation #11
	add16 c11((in_a | (~in_b)), (in_a & in_b), carry_in, calc11, carry[10]);
	
	// computation #12
	sub16 c12((in_a & in_b), {{15{1'b0}}, {1'b1}}, carry_in, calc12, carry[11]);

	// computation #13
	add16 c13(in_a, in_a, carry_in, calc13, carry[12]);
	
	// computation #14
	add16 c14((in_a | in_b), in_a, carry_in, calc14, carry[13]);
	
	// computation #15
	add16 c15((in_a | (~in_b)), in_a, carry_in, calc15, carry[14]);

	// computation #16
	sub16 c16(in_a, {{15{1'b0}}, {1'b1}}, carry_in, calc16, carry[15]);

	always @(*) begin

		if (in_a == in_b) begin
			assign compare = 1'b1;
		end else begin
			assign compare = 1'b0;
		end

		case (select)
			4'b0000: begin
				carry_out = carry[0];
				arith_out = calc1[15:0];
			end
			4'b0001: begin
				carry_out = carry[1];
				arith_out = calc2[15:0];
			end
			4'b0010: begin
				carry_out = carry[2];
				arith_out = calc3[15:0];
			end
			4'b0011: begin
				carry_out = carry[3];
				arith_out = calc4[15:0];
			end
			4'b0100: begin
				carry_out = carry[4];
				arith_out = calc5[15:0];
			end
			4'b0101: begin
				carry_out = carry[5];
				arith_out = calc6[15:0];
			end
			4'b0110: begin
				carry_out = carry[6];
				arith_out = calc7[15:0];
			end
			4'b0111: begin
				carry_out = carry[7];
				arith_out = calc8[15:0];
			end
			4'b1000: begin
				carry_out = carry[8];
				arith_out = calc9[15:0];
			end
			4'b1001: begin
				carry_out = carry[9];
				arith_out = calc10[15:0];
			end
			4'b1010: begin
				carry_out = carry[10];
				arith_out = calc11[15:0];
			end
			4'b1011: begin
				carry_out = carry[11];
				arith_out = calc12[15:0];
			end
			4'b1100: begin
				carry_out = carry[12];
				arith_out = calc13[15:0];
			end
			4'b1101: begin
				carry_out = carry[13];
			        arith_out = calc14[15:0];	
			end
			4'b1110: begin
				carry_out = carry[14];
				arith_out = calc15[15:0];
			end
			4'b1111: begin 
				carry_out = carry[15];
				arith_out = calc16[15:0];
			end
		endcase

	end


endmodule
