#include "verilated.h"
#include "Vbitty_test.h"

#include <iostream>

using namespace std;

void InsertSignals(Vbitty_test *tb, bool clk_s, bool reset_s, bool load_s, bool run_s) {
	tb->clk = clk_s;
	tb->reset = reset_s;
	tb->run = run_s;
	tb->load = load_s;
	tb->eval();
}

int main(int argc, char **argv) {

	Verilated::commandArgs(argc, argv);

	Vbitty_test *tb = new Vbitty_test;

	InsertSignals(tb, false, true, true, false);
	InsertSignals(tb, true, true, true, false);
	InsertSignals(tb, false, true, true, false);

	for (int i = 1; i <= 32; i++) {
		InsertSignals(tb, true, false, false, true);
		InsertSignals(tb, false, false, false, true);
	}

	return 0;
}
