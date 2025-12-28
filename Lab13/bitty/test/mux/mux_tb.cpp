#include "verilated.h"
#include "Vmux.h"
#include <iostream>
#include <cctype>

using namespace std;

const int K = 139, B = 8147, mod = (int)(1e9) + 7;
int SEED = 19997;

int Random() {
	int prev_val = SEED;
	SEED = ((SEED * 1ll * K + 1ll * B) % (1ll * mod));
	return (prev_val ^ SEED);
}

int main(int argc, char **argv) {

	Verilated::commandArgs(argc, argv);

	Vmux *tb = new Vmux;

	unsigned short in_data[9];
	int16_t select_signal;
	int16_t needed_output;

	int count = 0;
	int ALL = 1000;
	for (int i = 1; i <= 1000; i++) {
		// GENERATE THE CURRENT INPUT
		for (int idx = 0; idx < 9; idx++) {
			in_data[idx] = static_cast<unsigned short>((Random() % (1 << 16)));
		}
		select_signal = static_cast<int16_t>((Random() % 9));
		needed_output = in_data[select_signal];
		// PLACE THE VALUES AND CHECK
		for (int iter = 0; iter < 9; iter++) {
			tb->in[iter] = in_data[iter];
		}
		tb->sel = select_signal;
		tb->eval();
		if ((int16_t)(tb->out) == needed_output) {
			count++;
		} else {
			cout << "Error occured at test #" << i << "\n";
			cout << "What was simulated: " << tb->out << "\n";
			cout << "What was expected: " << needed_output << "\n";
		}
	}

	cout << "TEST RESULTS: SUCCESS RATE = " << count << " out of " << ALL << "\n";

	return 0;
}

