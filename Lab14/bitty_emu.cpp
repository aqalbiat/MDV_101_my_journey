#include <cstdint>
#include <vector>
#include <algorithm>
#include "bitty_emu.h"
#include <iostream>

using namespace std;

BittyEmulator :: BittyEmulator() {
	this->registers_.resize(8);
	fill(registers_.begin(), registers_.end(), 0);
}

uint16_t BittyEmulator :: Evaluate(uint16_t instruction) {
	uint16_t fmt = (instruction & 3);
	if (fmt == 1) {
		uint16_t reg = ((instruction >> 13) & 7);
		uint16_t imm = ((instruction >> 5) & 255);
		uint16_t fun = ((instruction >> 2) & 7);
		return (this->RunImmediate(reg, imm, fun));
	} else {
		uint16_t rx = ((instruction >> 13) & 7);
		uint16_t ry = ((instruction >> 10) & 7);
		uint16_t fun = ((instruction >> 2) & 7);
		return RunRegInstruction(rx, ry, fun);
	}
	return -1;
}

uint16_t BittyEmulator :: GetRegisterValue(uint16_t reg_num) {
	if (reg_num < 0 || 7 < reg_num) {
		return 0;
	}
	return this->registers_[reg_num];
}

uint16_t BittyEmulator :: RunImmediate(uint16_t reg, uint16_t imm, uint16_t fun) {
	uint16_t code = 0;
	switch(fun) {
		case 0: {
			registers_[reg] += imm;		
			break;	
		}
		case 1: {
			registers_[reg] -= imm;
			break;
		}
		case 2: {
			registers_[reg] &= imm;
			break;
		}
		case 3: {
			registers_[reg] |= imm;
			break;
		}
		case 4: {
			registers_[reg] ^= imm;
			break;
		}
		case 5: {
			if (imm < 16) {
				registers_[reg] <<= imm;
			} else {
				registers_[reg] = 0;
			}
			break;
		}
		case 6: {
			if (imm < 16) {
				registers_[reg] >>= imm;
			} else {
				registers_[reg] = 0;
			}
			break;
		}
		case 7: {
			uint16_t vl = registers_[reg];
			if (vl == imm) {
				registers_[reg] = 0;
			} else if (vl > imm) {
				registers_[reg] = 1;
			} else {
				registers_[reg] = 2;
			}
			break;
		}
		default: {
			code = -1;	 
		}
	}
	return code;
}

uint16_t BittyEmulator :: RunRegInstruction(uint16_t rx, uint16_t ry, uint16_t fun) {
	uint16_t code = 0;
	switch(fun) {
		case 0: {
			registers_[rx] += registers_[ry];
			break;	
		}
		case 1: {
			registers_[rx] -= registers_[ry];
			break;
		}
		case 2: {
			registers_[rx] &= registers_[ry];
			break;	
		}
		case 3: {
			registers_[rx] |= registers_[ry];
			break;
		}
		case 4: {
			registers_[rx] ^= registers_[ry];
			break;
		}
		case 5: {
			uint16_t shmt = registers_[ry];
			if (shmt < 16) {
				registers_[rx] <<= shmt;
			} else {
				registers_[rx] = 0;
			}
			break;
		}
		case 6: {
			uint16_t shmt = registers_[ry]; 
			// 
			// least significant 4 bits
			// 
			if (shmt < 16) {
				registers_[rx] >>= shmt;
			} else {
				registers_[rx] = 0;
			}
			break;
		}
		case 7: {
			if (registers_[rx] == registers_[ry]) {
				registers_[rx] = 0;
			} else if (registers_[rx] > registers_[ry]) {
				registers_[rx] = 1;
			} else {
				registers_[rx] = 2;
			}
			break;
		}
	}
	return code;
}

