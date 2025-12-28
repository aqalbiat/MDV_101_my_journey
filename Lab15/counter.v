import "DPI-C" function void notify_counter_reached_nine();

module counter (input logic clk, input logic reset);

	logic [3:0] count;

	always_ff @(posedge clk or posedge reset) begin
		if (reset) begin
			count <= 0;
		end else begin
			count <= count + 1;
			if (count == 4'd9) begin 
				notify_counter_reached_nine();
			end
		end
	end

endmodule


