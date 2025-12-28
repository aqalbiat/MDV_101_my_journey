
module keylock_fsm (
	input clk, 
	input reset,
	input wire [3:0] digit,
	output reg locked
);

	// State encoding
	parameter enterX = 4'b0000;
	parameter digit1 = 4'b0011;
	parameter digit2 = 4'b0011;
	parameter digit3 = 4'b0101;
	parameter digit4 = 4'b0010;
	parameter digit5 = 4'b0101;
	parameter digit6 = 4'b0110;

	reg [3:0] current_state, next_state;

	// Model state register (sequential logic)
	always @(posedge clk or posedge reset) begin
		if (reset) begin
			current_state <= enterX;
		end else begin
			current_state <= next_state;
		end
	end

	// Model next state decode logic (combinational logic)
	always @(*) begin
		if (digit == digit1 && current_state == enterX) begin
			next_state = digit1;
		end else if (digit == digit2 && current_state == digit1) begin
			next_state = digit2;
		end else if (digit == digit3 && current_state == digit2) begin
			next_state = digit3;
		end else if (digit == digit4 && current_state == digit3) begin
			next_state = digit4;
		end else if (digit == digit5 && current_state == digit4) begin
			next_state = digit5;
		end else if (digit == digit6 && current_state == digit5) begin
			next_state = digit6;
		end else begin
			next_state = enterX;
		end
	end

	// Model output logic (combinational logic)
	always @(*) begin
		case (next_state) 
			digit6: begin
				locked = 1'b0;
			end
			default: begin
				locked = 1'b1;
			end
		endcase	
	end

endmodule


