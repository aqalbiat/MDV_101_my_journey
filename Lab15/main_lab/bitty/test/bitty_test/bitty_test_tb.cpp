#include "verilated.h"
#include "Vbitty_test.h"

#include <iostream>

using namespace std;

const bool IS_SAMPLE = false;

void InsertSignals(Vbitty_test *tb, bool clk_s, bool reset_s, bool run_s) {
	tb->clk = clk_s;
	tb->reset = reset_s;
	tb->run = run_s;
	tb->eval();
}

int main(int argc, char **argv) {

	Verilated::commandArgs(argc, argv);

	Vbitty_test *tb = new Vbitty_test;

	InsertSignals(tb, false, true, false);
	InsertSignals(tb, true, true, false);
	InsertSignals(tb, false, true, false);
	InsertSignals(tb, true, false, false);
	InsertSignals(tb, false, false, false);

	int addition = (IS_SAMPLE ? 0 : 4000 * 1000);

	for (int i = 1; i <= 28 + addition; i++) {
		InsertSignals(tb, true, false, true);
		InsertSignals(tb, false, false, true);
	}

	return 0;
}
