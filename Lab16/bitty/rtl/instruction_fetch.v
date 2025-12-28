module instruction_fetch(
    input clk, 
    input reset,
    input load,
    input en_pc,
    output reg [15:0] out
);

    reg [15:0] d_in;
    reg [15:0] d_out;
    wire [7:0] addr;

    register PC(d_in, reset, clk, en_pc, d_out);

    always @(*) begin
        d_in = ((d_out + 16'd1) & 16'd255);
    end

    assign addr = d_out[7:0];
    memory instruction_storage(clk, load, addr, out);

endmodule