
module traffic_light_fsm (
	input clk,
	input reset,
	input wire [31:0] counter,  
	output reg [2:0] light
);


	parameter RED = 2'b00;
	parameter GREEN = 2'b01;
	parameter YELLOW = 2'b10;

	reg [1:0] current_state, next_state;
	reg [31:0] cnt_timer;

	always @(posedge clk or posedge reset) begin
	
		if (reset) begin
			current_state <= RED;
			cnt_timer <= counter;
		end else if (clk && cnt_timer > 32'b1) begin
			cnt_timer <= cnt_timer - 32'b1;
		end else if (cnt_timer == 32'b1) begin
			current_state <= next_state;
			cnt_timer <= counter;
		end
	end

	always @(*) begin
		case (current_state) 
			RED: begin
				next_state = GREEN;
			end
			GREEN: begin
				next_state = YELLOW;
			end
			YELLOW: begin
				next_state = RED;
			end
			default: begin
				next_state = RED;
			end
		endcase
	end

	always @(*) begin
		case (current_state) 
			RED: begin
				light = 3'b001;
			end
			GREEN: begin
				light = 3'b010;
			end
			YELLOW: begin
				light = 3'b100;
			end
			default: begin
				light = 3'b001;
			end
		endcase
	end

endmodule
