#include "verilated.h"
#include "Vcontrol_unit.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

struct ControlUnitSignals {

	unsigned short inst;
	bool run_s, clk_s, rst_s;
	
	ControlUnitSignals() {
		inst = 0;
		run_s = clk_s = rst_s = false;
	}
	
	ControlUnitSignals(string instruction, bool init_run, bool init_clk, bool init_rst) {
		inst = 0;
		for (size_t it = 0; it < instruction.size(); it++) {
			inst = 2 * inst + static_cast<unsigned short>(instruction[it] - '0');
		}
		run_s = init_run;
		clk_s = init_clk;
		rst_s = init_rst;
	}

	void write_to_tb(Vcontrol_unit *hw) {
		hw->instructions = inst;
		hw->run = run_s;
		hw->clk = clk_s;
		hw->reset = rst_s;
	}
	

};

string CreateInstruction(int rx, int ry, int alu, int m) {
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
	r[9] = ((alu >> 3) & 1);
	r[10] = ((alu >> 2) & 1);
	r[11] = ((alu >> 1) & 1);
	r[12] = ((alu >> 0) & 1);
	// mode for alu
	r[13] = ((m >> 0) & 1);
	string str;
	for (int i = 0; i < 16; i++) {
		str.push_back(r[i] ? '1' : '0');
	}	
	return str;
}

vector <string> generate_instructions() {
	srand(137);
	vector <string> result;
	// rx, ry, alu_sel, mode
	for (int i = 0; i < 20; i++) {
		int rx = abs(rand()) % 8;
		int ry = (rx + (abs(rand()) % 7)) % 8;
		int alu_s = abs(rand()) % 16;
		int mode = abs(rand()) % 2;
		result.push_back(CreateInstruction(rx, ry, alu_s, mode));
	}
	return result;
}

void PrintModuleState(Vcontrol_unit *m, int clock_count) {
	cout << "\n=============== #" << clock_count << " HALF CYCLE ===============\n";
	bitset <16> instr(m->instructions);
	bitset <8> reg_file(m->en_reg);
	cout << "Current instruction  = " << instr                 << "\n";
	cout << "Run signal           = " << (bool)(m->run)        << "\n";
	cout << "Clock signal         = " << (bool)(m->clk)        << "\n";
	cout << "Reset signal         = " << (bool)(m->reset)      << "\n";
	cout << "Mux select           = " << (int)(m->mux_sel)     << "\n";
	cout << "ALU select           = " << (int)(m->sel)         << "\n";
	cout << "ALU mode             = " << (int)(m->mode)        << "\n";	
	cout << "Enable S register    = " << (bool)(m->en_s)       << "\n";
	cout << "Enable C register    = " << (bool)(m->en_c)       << "\n";
	cout << "Registers enable     = " << reg_file              << "\n";
	cout << "Inst. reg. enable    = " << (bool)(m->en_i)       << "\n";
	cout << "Done signal          = " << (bool)(m->done)       << "\n";
}

int main(int argc, char **argv) {

	Verilated::commandArgs(argc, argv);

	Vcontrol_unit *tb = new Vcontrol_unit;
	
	vector <string> fetch_i = generate_instructions();

	// arguments index: instruction, run, clock, reset
	vector <ControlUnitSignals> signals;
	signals.push_back(ControlUnitSignals(CreateInstruction(0, 0, 0, 0), false, true, true));
	signals.push_back(ControlUnitSignals(CreateInstruction(0, 0, 0, 0), false, false, true));
	for (int i = 0; i < static_cast<int>(fetch_i.size()); i++) {
		for (int clocks = 0; clocks < 4; clocks++) {
			signals.push_back(ControlUnitSignals(fetch_i[i], true, true, false));
			signals.push_back(ControlUnitSignals(fetch_i[i], true, false, false));
		}
	}

	for (int c = 1; c <= (int)(signals.size()); c++) {
		signals[c - 1].write_to_tb(tb);
		tb->eval();
		PrintModuleState(tb, c);
	}

	return 0;
}

