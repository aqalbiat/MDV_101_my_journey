#include "verilated.h"
#include "Vregister.h"

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

	Verilated::commandArgs(argc, argv);
	Vregister *tb = new Vregister;

	tb->clk = 0;
	tb->reset = 1;
	tb->eval();
	tb->reset = 0;

	bool rst[20] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0};
	bool enb[20] = {1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
	unsigned short nbr[20];

	srand(137);
	for (int i = 0; i < 20; i++) {
		nbr[i] = static_cast<unsigned short>((rand() % (1 << 16)));	
	}

	for (int i = 0; i < 20; i++) {
		tb->clk = ~tb->clk;
		tb->d_in = nbr[i];
		tb->reset = rst[i];
		tb->en = enb[i];
		tb->eval();
		cout << "\n\n============== HALF CYCLE #" << i + 1 << " ============== \n";
		cout << " input data = " << nbr[i] << "\n";
		cout << " clock = " << (bool)(tb->clk) << "; enable = " << enb[i] << "; reset = " << rst[i] << ";\n";
		cout << " output data = " << tb->d_out << ";\n";
	}

	tb->final();
	delete tb;

	return 0;
}
