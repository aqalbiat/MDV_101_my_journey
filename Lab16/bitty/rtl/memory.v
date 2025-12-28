module memory(
    input clk,
    input load,
    input [7:0] addr,
    output reg [15:0] out
);

    reg [15:0] data [255:0];

    always @(posedge clk) begin
        if (load) begin
            $display("Load the memory");
            $readmemh("./storage/archive.txt", data);
        end else begin
            out <= data[addr];
        end
    end

endmodule