#include "verilated.h"
#include "Vcounter.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {

	Verilated::commandArgs(argc, argv);

	Vcounter *tb = new Vcounter;

	vector < pair <int, int> > tests;

	tests.push_back(make_pair(1, 1));
	tests.push_back(make_pair(0, 1));

	for (int i = 0; i < 31; i++) {
		tests.push_back(make_pair(1, 0));
		tests.push_back(make_pair(0, 0));
	}


	for (size_t it = 0; it < tests.size(); it++) {
		cout << "\n\n========== #" << it + 1 << " HALF CYCLE ========== \n";
		tb->clk = tests[it].first;
		tb->reset = tests[it].second;
		tb->eval();
	}

	return 0;
}


