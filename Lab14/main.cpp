#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <vector>
#include <cassert>

#include "bitty_emu.h"

using namespace std;

uint16_t calculate(uint16_t a, uint16_t b, uint16_t fun);

uint16_t create_instruction(uint16_t f1, uint16_t f2, uint16_t fun, uint16_t fmt);

int main() {

	srand(137);
	BittyEmulator bitty = BittyEmulator();

	// int ok = 0;
	// const int single = 62500;
	// int bad1 = 0, bad2 = 0;

	cout << "Initial values of registers: " << "\n";
	for (uint16_t i = 0; i < 8; i++) {
		cout << bitty.GetRegisterValue(i) << "\n";
	}
	
	
	// 1st instruction, 1st test, r1 += 13
	uint16_t needed1 = 13;
	bitty.Evaluate(create_instruction(1, 13, 0, 1));
	assert(needed1 == bitty.GetRegisterValue(1));

	// 1st instruction, 2nd test, r4 += 89
	uint16_t needed2 = 89;
	bitty.Evaluate(create_instruction(4, 89, 0, 1));
	assert(needed2 == bitty.GetRegisterValue(4));

	// 2nd instruction, 1st test, r1 -= 4
	uint16_t needed3 = 9;
	bitty.Evaluate(create_instruction(1, 4, 1, 1));
	assert(needed3 == bitty.GetRegisterValue(1));
	
	// 2nd instruction, 2nd test, r4 -= 13
	uint16_t needed4 = 76;
	bitty.Evaluate(create_instruction(4, 13, 1, 1));
	assert(needed4 == bitty.GetRegisterValue(4));
	
	// 3rd instruction, r1 &= 72
	uint16_t needed5 = 8;
	bitty.Evaluate(create_instruction(1, 72, 2, 1));
	assert(needed5 == bitty.GetRegisterValue(1));

	// 4th instruction, r4 |= 192
	uint16_t needed6 = 204;
	bitty.Evaluate(create_instruction(4, 192, 3, 1));
	assert(needed6 == bitty.GetRegisterValue(4));
	
	// 5th instruction, 1st test, r5 ^= 144
	uint16_t needed7 = 144;
	bitty.Evaluate(create_instruction(5, 144, 4, 1));
	assert(needed7 == bitty.GetRegisterValue(5));

	// 5th instruction, 2nd test, r6 ^= 87
	uint16_t needed8 = 87;
	bitty.Evaluate(create_instruction(6, 87, 4, 1));
	assert(needed8 == bitty.GetRegisterValue(6));


	// 6th instruction, r5 <<= 2
	uint16_t needed9 = 576;
       	bitty.Evaluate(create_instruction(5, 2, 5, 1));
	assert(needed9 == bitty.GetRegisterValue(5));

	// 7th instruction, r6 >>= 2
	uint16_t needed10 = 21;
	bitty.Evaluate(create_instruction(6, 2, 6, 1));
	assert(needed10 == bitty.GetRegisterValue(6));	
	
	// 8th instruction, r5 = (r5 > 300);
	uint16_t needed11 = 1;
	bitty.Evaluate(create_instruction(5, 300, 7, 1));
	assert(needed11 == bitty.GetRegisterValue(5));

	cout << "FINAL REGISTER VALUES\n";
	for (int i = 0; i < 8; i++) {
		cout << bitty.GetRegisterValue(i) << "\n";
	}

	cout << "\n\nALL TESTS PASSED\n\n";
	return 0;
}

uint16_t create_instruction(uint16_t f1, uint16_t f2, uint16_t fun, uint16_t fmt) {
	uint16_t instr = 0;
	if (fmt == 1) {
		instr ^= ((f1 & 7) << 13);
		instr ^= ((f2 & 255) << 5);
		instr ^= ((fun & 7) << 2);
		instr ^= ((fmt & 3));
	} else {
		instr ^= ((f1 & 7) << 13);
		instr ^= ((f2 & 7) << 10);
		instr ^= ((fun & 7) << 2);
		instr ^= ((fmt & 3));
	}
	return instr;
}

uint16_t calculate(uint16_t a, uint16_t b, uint16_t fun) {
	uint16_t res = 0;
	if (fun == 0) {
		res = a + b;
	} else if (fun == 1) {
		res = a - b;
	} else if (fun == 2) {
		res = (a & b);
	} else if (fun == 3) {
		res = (a | b);
	} else if (fun == 4) {
		res = (a ^ b);
	} else if (fun == 5) {
		if (b < 16) {
			res = (a << b);
		} else {
			res = 0;
		}
	} else if (fun == 6) {
		if (b < 16) {
			res = (a >> b);
		} else {
			res = 0;	
		}
	} else if (fun == 7) {
		if (a == b) {
			res = 0;
		} else if (a > b) {
			res = 1;
		} else {
			res = 2;
		}
	} else {
		return -1;
	}
	return res;
}

