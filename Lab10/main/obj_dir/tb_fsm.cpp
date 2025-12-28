#include "verilated.h"
#include "Vkeylock_fsm.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	Verilated::commandArgs(argc, argv);

	Vkeylock_fsm *tb = new Vkeylock_fsm;

	// First, initiate the sequential logic
	// so that it will be open for sequence of tests

	// Start the testing itself
	// It will be done with the predefined sequence of digits

	int tt[30] = {4, 4, 3, 3, 5, 2, 5, 6, 1, 7, 2, 6, 7, 3, 3, 5, 2, 7, 6, 2, 9, 8, 3, 3, 5, 2, 5, 6, 1, 2};

	tb->clk = 0;
	tb->reset = 1;

	for (int i = 0; i < 60; i++) {
		int pos = i / 2;
		tb->clk = ~tb->clk;
		tb->digit = tt[pos];
		tb->eval();
		cout << "[" << i << "]: " << tt[pos] << " --- ";
		cout << "Current state of the lock: " << (bool)(tb->locked) << "\n";
		tb->reset = 0;
	}

	delete tb;

	return 0;
}


