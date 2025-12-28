#include "verilated.h"
#include "Valu.h"

#include <iostream>
#include <cctype>

using namespace std;

const int my_seed = 103;

int Random() {
	return (rand() ^ (rand() << 16));
}

void generate_short(int *nbr) {
	int tmp = abs(Random()) % 32178;
	*nbr = tmp;
}

bool check_alu(int sel, int in1, int in2, int res) {
	if (sel == 0) {
		int need = in1 + in2;
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 1) {
		int need = in1 - in2;
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 2) {
		int need = (in1 & in2);
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 3) {
		int need = (in1 | in2);
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 4) {
		int need = (in1 ^ in2);
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 5) {
		int need = (in1 << (in2 % 16));
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 6) {
		int need = (in1 >> (in2 % 16));
		return ((int16_t)(need) == (int16_t)(res));
	}
	if (sel == 7) {
		int need = (in1 == in2 ? 0 : (in1 > in2 ? 1 : 2));
		return ((int16_t)(need) == (int16_t)(res));
	}
	return false;
}

int main(int argc, char **argv) {
	
	Verilated :: commandArgs(argc, argv);

	Valu *my_alu = new Valu;
	
	srand(my_seed);

	int ok_count = 0;
	int x, y;	
	for (int select = 0; select < 8; select++) {
		int bad = 0;
		cout << "\n\nCategory: " << select << "\n";
		for (int i = 1; i <= 1000; i++) {
			generate_short(&x);
			generate_short(&y);
			if (select == 5 || select == 6) {
				y %= 64;
			}
			my_alu->in_a = x;
			my_alu->in_b = y;
			my_alu->select = select;
			my_alu->eval();
			if (check_alu(select, x, y, my_alu->alu_out)) {
				ok_count++;
			} else {
				bad++;
				if (bad <= 5) {
					cout << x << " " << y << " " << my_alu->alu_out << "\n";
				}
			}
		}
		cout << "Success rate in this category = " << 1000 - bad << " out of 1000\n";
	}
	
	cout << "Overall success rate = " << ok_count << " out of " << 8000 << "\n";

	return 0;
}
