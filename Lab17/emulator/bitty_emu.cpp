#include <cstdint>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "bitty_emu.h"

using namespace std;

BittyEmulator :: BittyEmulator() {
	this->registers_.resize(8);
	this->addr_ = 0;
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
			imm = (imm & 15);
			registers_[reg] <<= imm;
			break;
		}
		case 6: {
			imm = (imm & 15);
			registers_[reg] >>= imm;
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
			shmt = (shmt & 15);
			registers_[rx] <<= shmt;
			break;
		}
		case 6: {
			uint16_t shmt = registers_[ry]; 
			shmt = (shmt & 15); 
			registers_[rx] >>= shmt;
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

const char HH[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
uint16_t BittyEmulator::ConvertHexToNumber(string blob) {
        uint16_t res = 0;
    for (int i = 0; i < (int)(blob.size()); i++) {
        int d = 0;
        for (int j = 0; j < 16; j++) {
            if (HH[j] == blob[i]) {
                d = j;
                break;
            }
        }
        res = res * 16 + (uint16_t)(d);
    }
    return res;
}

void BittyEmulator::ReadMemory() {
        ifstream fin;
        fin.open("./storage/archive.txt");
        string line;
        while (fin >> line) {
                this->instructions_.push_back(ConvertHexToNumber(line));
        }
        fin.close();
}

uint16_t BittyEmulator::GetAmountOfInstructions() {
	return static_cast<uint16_t>(this->instructions_.size());
}

uint16_t BittyEmulator::NextInstruction() {
        addr_++;
        return instructions_[addr_ - 1];
}
