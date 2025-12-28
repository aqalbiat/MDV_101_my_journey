
import "DPI-C" function void simulate_current_instruction();
import "DPI-C" function void read_all_instructions();
import "DPI-C" function void PrintModuleState();

import "DPI-C" function shortint fetch_register_data_r0();
import "DPI-C" function shortint fetch_register_data_r1();
import "DPI-C" function shortint fetch_register_data_r2();
import "DPI-C" function shortint fetch_register_data_r3();
import "DPI-C" function shortint fetch_register_data_r4();
import "DPI-C" function shortint fetch_register_data_r5();
import "DPI-C" function shortint fetch_register_data_r6();
import "DPI-C" function shortint fetch_register_data_r7();

module bitty_test (
	input clk, 
	input run,
	input reset,
    input load,
    output [15:0] out_reg [8:0],
	output done,
	output parity
);

    parameter state0 = 4'b0000;
    parameter state1 = 4'b0001;
    parameter state2 = 4'b0010;
    parameter state3 = 4'b0011;
    parameter state4 = 4'b0100;
    parameter null_state = 4'b1111;

    reg [15:0] instruction;
    reg [3:0] current_state;
    reg [3:0] next_state;

    integer clock_count = 0;
    integer error_count = 0;

    always @(posedge clk) begin
        clock_count <= clock_count + 1;
        if (reset) begin
            current_state <= null_state;
            read_all_instructions();
        end else begin
            current_state <= next_state;
            if (clock_count % 50 == 0 || clock_count == 256) begin
                $display("Current clock = %d", clock_count);
                $display("Number of errors = %d", error_count);
                $display("");
            end
            $display("States of the registers in DUT (clock = %d)", clock_count);
            $display("r0=%d", out_reg[0]);
            $display("r1=%d", out_reg[1]);
            $display("r2=%d", out_reg[2]);
            $display("r3=%d", out_reg[3]);
            $display("r4=%d", out_reg[4]);
            $display("r5=%d", out_reg[5]);
            $display("r6=%d", out_reg[6]);
            $display("r7=%d", out_reg[7]);
            $display("Current instruction = %b", instruction);
            if (current_state == state4) begin
                simulate_current_instruction();
                PrintModuleState(); 
                if (fetch_register_data_r0() != out_reg[0] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #0 has flawed value");
                    $display("DUT register #0 = %d", out_reg[0]);
                    $display("Golden model #0 = %d", fetch_register_data_r0());
                    $display("");
                end
                if (fetch_register_data_r1() != out_reg[1] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #1 has flawed value");
                    $display("DUT register #1 = %d", out_reg[1]);
                    $display("Golden model #1 = %d", fetch_register_data_r1());
                    $display("");
                end
                if (fetch_register_data_r2() != out_reg[2] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #2 has flawed value");
                    $display("DUT register #2 = %d", out_reg[2]);
                    $display("Golden model #2 = %d", fetch_register_data_r2());
                    $display("");
                end
                if (fetch_register_data_r3() != out_reg[3] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #3 has flawed value");
                    $display("DUT register #3 = %d", out_reg[3]);
                    $display("Golden model #3 = %d", fetch_register_data_r3());
                    $display("");
                end
                if (fetch_register_data_r4() != out_reg[4] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #4 has flawed value");
                    $display("DUT register #4 = %d", out_reg[4]);
                    $display("Golden model #4 = %d", fetch_register_data_r4());
                    $display("");
                end
                if (fetch_register_data_r5() != out_reg[5] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #5 has flawed value");
                    $display("DUT register #5 = %d", out_reg[5]);
                    $display("Golden model #5 = %d", fetch_register_data_r5());
                    $display("");
                end
                if (fetch_register_data_r6() != out_reg[6] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #6 has flawed value");
                    $display("DUT register #6 = %d", out_reg[6]);
                    $display("Golden model #6 = %d", fetch_register_data_r6());
                    $display("");
                end
                if (fetch_register_data_r7() != out_reg[7] && error_count < 50) begin
                    error_count <= error_count + 1;
                    $display("Register #7 has flawed value");
                    $display("DUT register #7 = %d", out_reg[7]);
                    $display("Golden model #7 = %d", fetch_register_data_r7());
                    $display("");
                end
            end
        end
    end

    always @(*) begin
        if (current_state == null_state && run) begin
            next_state = state0;
        end else if (current_state == state0 && run) begin
            next_state = state1;
        end else if (current_state == state1 && run) begin
            next_state = state2;
        end else if (current_state == state2 && run) begin
            next_state = state3;
        end else if (current_state == state3 && run) begin
            next_state = state4;
        end else if (current_state == state4 && run) begin
            next_state = state0;
        end else begin
            next_state = null_state;
        end
    end

    bitty_core core(clk, run, reset, instruction, out_reg, done, parity);
    instruction_fetch fetch_unit(clk, reset, load, done, instruction);

endmodule
