#include "verilated.h"
#include "Vtraffic_light_fsm.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	
	Verilated::commandArgs(argc, argv);

	Vtraffic_light_fsm *tb = new Vtraffic_light_fsm;
	
	// ticking some clocks before main testing, to initiate
	// the start of the sequential logic
	tb->clk = 0;
	tb->reset = 1;
	tb->counter = 1;
	tb->eval();
	tb->reset = 0;

	int arr[16] = {-1, 8, 10, 4, 3, 5, 1, 1};
	for (int tt = 1; tt <= 5; tt++) {
		int duration1 = arr[tt];
		cout << "Number #" << tt <<  " test, with counter = " << duration1 << "\n";

		tb->clk = 0;
		tb->reset = 1;
		tb->counter = duration1;

		for (int i = 1;  i <= 10 * duration1; i++) {
			tb->clk = ~tb->clk;
			tb->eval();
			int current_answer = static_cast<int>(tb->light);
			cout <<"[" << (i < 10 ? "0" : "") << i << "]: " << current_answer << "\n";
			tb->reset = 0;
		}
	}

	delete tb;

	return 0;
}


