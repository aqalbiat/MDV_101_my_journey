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

string CreateInstruction(int rx, int ry, int alu) {
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
	string str;
	for (int i = 0; i < 16; i++) {
		str.push_back(r[i] ? '1' : '0');
	}	
	return str;
}

vector <string> generate_instructions() {
	vector <string> result;
	// rx, ry, alu_sel
	result.push_back(CreateInstruction(1, 7, 0)); // r1 += r7
	result.push_back(CreateInstruction(1, 7, 0)); // r1 += r7
	result.push_back(CreateInstruction(1, 7, 0)); // r1 += r7
	result.push_back(CreateInstruction(1, 7, 0)); // r1 += r7
	result.push_back(CreateInstruction(2, 7, 0)); // r2 += r7
	result.push_back(CreateInstruction(1, 2, 4)); // r1 ^= r2
	result.push_back(CreateInstruction(3, 7, 0)); // r3 += r7
	result.push_back(CreateInstruction(3, 7, 0)); // r3 += r7
	result.push_back(CreateInstruction(2, 3, 5)); // r2 <<= r3
	result.push_back(CreateInstruction(0, 0, 0)); 
	return result;
}

void PrintModuleState(Vbitty_core *m, int clock_count) {
	cout << "\n=============== #" << clock_count << " HALF CYCLE ===============\n";
	bitset <16> instr(m->instruction);
	cout << "Current instruction  = " << instr                 << "\n";
	cout << "Run signal           = " << (bool)(m->run)        << "\n";
	cout << "Clock signal         = " << (bool)(m->clk)        << "\n";
	cout << "Reset signal         = " << (bool)(m->reset)      << "\n";
	for (int i = 0; i < 8; i++) {
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
	signals.push_back(BittyCoreSignals(CreateInstruction(0, 0, 0), false, true, true));
	signals.push_back(BittyCoreSignals(CreateInstruction(0, 0, 0), false, false, true));
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
