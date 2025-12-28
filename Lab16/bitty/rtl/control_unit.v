
module control_unit(
	input [15:0] instructions,
	input run,
	input clk, 
	input reset,
	output reg [3:0] mux_sel,
	output reg [2:0] sel,
	output en_s,
	output en_c,
	output reg [7:0] en_reg,
	output en_i,
	output done,
	output parity
);

	parameter null_state = 3'b111;
	parameter state1 = 3'b000;
	parameter state2 = 3'b001;
	parameter state3 = 3'b010;
	parameter state4 = 3'b011;
	parameter state3_b = 3'b100;

	wire [1:0] fmt;
	reg [2:0] current_state;
	reg [2:0] next_state;

	assign fmt = instructions[1:0];

	// Saving the needed states to the step counter
	// the sequential part of the ciruit 
	always @(posedge clk) begin
		if (run & ~reset) begin
			current_state <= next_state;
		end else if (run & reset) begin
			current_state <= null_state;
		end	
	end

	// Calculating the next stage of the process
	// the combinational part of the circuit
	always @(*) begin
		if (current_state == null_state && run) begin 
			next_state = state1;
		end else if (current_state == state1 && run) begin
			next_state = state2;
		end else if (current_state == state2 && run && fmt == 2'd0) begin
			next_state = state3;
		end else if (current_state == state2 && run && fmt == 2'd1) begin
			next_state = state3_b;
		end else if ((current_state == state3 || current_state == state3_b) && run) begin
			next_state = state4;
		end else if (current_state == state4 && run) begin
			next_state = state1;
		end else begin
			next_state = null_state;
		end	
	end

	// Deciding the resultant stage for the current clock
	// the combinational part of the circuit
	always @(*) begin
		if (next_state == state1) begin 
			en_i = 1'b1;
			/* ---------------------- */
			en_reg = {8{1'b0}};    // setting up everything to default value
			mux_sel = 4'b0000;     // setting up everything to default value
			sel = 3'b000;          // setting up everything to default value
		end else if (next_state == state2) begin
			en_s = 1'b1;
			mux_sel = {{1'b0}, instructions[15:13]};
			/* ---------------------- */
			en_i = 1'b0; // clearing previous signal
		end else if (next_state == state3) begin
			mux_sel = {{1'b0}, instructions[12:10]};
			en_c = 1'b1;
			sel = instructions[4:2];
			/* ---------------------- */
			en_s = 1'b0; // clearing previous signal
		end else if (next_state == state3_b) begin
			mux_sel = 4'd8;
			en_c = 1'b1;
			sel = instructions[4:2];
			/* ---------------------- */
			en_s = 1'b0; // clearing previous signal
		end 
	       	if (next_state == state4) begin
			done = 1'b1;
			en_reg[instructions[15:13]] = 1'b1;
			/* ---------------------- */
			en_c = 1'b0; // clearing previous signal
		end else begin
			done = 1'b0;
		end
	end

	// Assign unused bits to dumpster to avoid Warnings from Verilator
	// It is needed so verilater will not 'exite' during the syntethys
	assign parity = ^ instructions[15:0];

endmodule
