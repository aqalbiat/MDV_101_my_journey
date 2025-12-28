#include "verilated.h"
#include "Vbitty_core.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

struct BittyCoreSignals {

        unsigned short inst;
        bool run_s, clk_s, rst_s;

        BittyCoreSignals() {
                inst = 0;
                run_s = clk_s = rst_s = false;
        }

        BittyCoreSignals(string instruction, bool init_run, bool init_clk, bool init_rst) {
                inst = 0;
                for (size_t it = 0; it < instruction.size(); it++) {
                        inst = 2 * inst + static_cast<unsigned short>(instruction[it] - '0');
                }
                run_s = init_run;
                clk_s = init_clk;
                rst_s = init_rst;
        }

        void write_to_tb(Vbitty_core *hw) {
                hw->instruction = inst;
                hw->run = run_s;
                hw->clk = clk_s;
                hw->reset = rst_s;
        }

};

string CreateInstruction(int rx, int ry, int alu, bool fmt, int imm) {
        bool r[16] = {false};
        // destination operator
        r[0] = ((rx >> 2) & 1);
        r[1] = ((rx >> 1) & 1);
        r[2] = ((rx >> 0) & 1);
        // source operator
        r[3] = ((ry >> 2) & 1);
        r[4] = ((ry >> 1) & 1);
        r[5] = ((ry >> 0) & 1);
        // alu select
        r[11] = ((alu >> 2) & 1);
        r[12] = ((alu >> 1) & 1);
        r[13] = ((alu >> 0) & 1);
        if (fmt) {
                for (int pos = 3, shift = 7; pos < 11; pos++, shift--) {
                        r[pos] = ((imm >> shift) & 1);
                }
                r[14] = false;
                r[15] = true;
        } else {
                r[14] = r[15] = false;
        }
        string str;
        for (int i = 0; i < 16; i++) {
                str.push_back(r[i] ? '1' : '0');
        }
        return str;
}

vector <string> generate_instructions() {
        vector <string> result;
        // rx, ry, alu_sel, fmt, immediate
        result.push_back(CreateInstruction(1, 0, 0, true, 90));   // r1 += 90
        result.push_back(CreateInstruction(2, 0, 0, true, 23));   // r2 += 23
        result.push_back(CreateInstruction(1, 2, 0, false, 0));   // r1 += r2
        result.push_back(CreateInstruction(3, 0, 0, true, 144));  // r3 += 144
        result.push_back(CreateInstruction(4, 0, 0, true, 23));   // r4 += 23
        result.push_back(CreateInstruction(3, 4, 1, false, 0));   // r3 -= r4
        result.push_back(CreateInstruction(0, 0, 0, false, 0));   // r0 += r0
        return result;
}

void PrintModuleState(Vbitty_core *m, int clock_count) {
        cout << "\n=============== #" << clock_count << " HALF CYCLE ===============\n";
        bitset <16> instr(m->instruction);
        cout << "Current instruction  = " << instr                 << "\n";
        cout << "Run signal           = " << (bool)(m->run)        << "\n";
        cout << "Clock signal         = " << (bool)(m->clk)        << "\n";
        cout << "Reset signal         = " << (bool)(m->reset)      << "\n";
        for (int i = 0; i < 9; i++) {
                unsigned short regv = static_cast<unsigned short>(m->out_reg[i]);
                cout << "register #" << i << "          = " << (short)(regv) << "\n";
        }
        cout << "Done signal          = " << (bool)(m->done)       << "\n";
}

int main(int argc, char **argv) {

        Verilated::commandArgs(argc, argv);

        Vbitty_core *tb = new Vbitty_core;

        vector <string> fetch_i = generate_instructions();

        // arguments index: instruction, run, clock, reset
        vector <BittyCoreSignals> signals;
        signals.push_back(BittyCoreSignals(CreateInstruction(0, 0, 0, false, 0), false, true, true));
        signals.push_back(BittyCoreSignals(CreateInstruction(0, 0, 0, false, 0), false, false, true));
        for (int i = 0; i < static_cast<int>(fetch_i.size()); i++) {
                for (int clocks = 0; clocks < 4; clocks++) {
                        signals.push_back(BittyCoreSignals(fetch_i[i], true, true, false));
                        signals.push_back(BittyCoreSignals(fetch_i[i], true, false, false));
                }
        }

        for (int c = 1; c <= (int)(signals.size()); c++) {
                signals[c - 1].write_to_tb(tb);
                tb->eval();
                PrintModuleState(tb, c);
        }

}