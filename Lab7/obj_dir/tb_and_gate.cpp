#include "Vand_gate.h"

#include "verilated.h"

#include "verilated_vcd_c.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	Verilated :: commandArgs(argc, argv);

	Vand_gate *and_gate = new Vand_gate;

	Verilated::traceEverOn(true);
	VerilatedVcdC* vcd_trace = new VerilatedVcdC;
	and_gate->trace(vcd_trace, 99);
	vcd_trace->open("and_gate_trace.vcd");
	
	int time = 10;
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			and_gate->a = i;
			and_gate->b = j;
			and_gate->eval();
			vcd_trace->dump(time);
			time += 10;
			cout << "a = " << i << "; b = " << j << "; res = " << (int)and_gate->y << "\n";
		
		}
	
	}
	vcd_trace->dump(time);
	

	vcd_trace->close();
	delete and_gate;

	return 0;
}

