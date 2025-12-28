#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <fstream>
#include <cstdint>
#include <cstdlib>
#include <bitset>

using namespace std;

#define assertm(exp, msg) assert((void(msg), exp))
#define _ONLY_SAMPLE_TESTS_RUN_  false

class BittyEmulator {

	public:
	
		BittyEmulator();
	
		uint16_t Evaluate(uint16_t instruction);
	
		uint16_t GetRegisterValue(uint16_t reg_num);

		void ReadMemory();

		uint16_t NextInstruction();
	
	private:
	
		uint16_t addr_;
		vector <uint16_t> registers_;
		vector <uint16_t> instructions_;
	
		uint16_t RunImmediate(uint16_t reg, uint16_t imm, uint16_t fun);
	
		uint16_t RunRegInstruction(uint16_t rx, uint16_t ry, uint16_t fun);
	
		uint16_t ConvertHexToNumber(string blob);

};

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
			registers_[reg] <<= (imm % 16);
			break;
		}
		case 6: {
			registers_[reg] >>= (imm % 16);
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
			registers_[rx] <<= (shmt % 16);
			break;
		}
		case 6: {
			uint16_t shmt = registers_[ry]; 
			registers_[rx] >>= (shmt % 16);
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
	while ((int)(instructions_.size()) < 256) {
		instructions_.push_back(0);
	}
}

uint16_t BittyEmulator::NextInstruction() {
	addr_++;
	return instructions_[addr_ - 1];
}

uint16_t _curr_instr;
uint16_t _box[8];
int instr_count;

BittyEmulator emu;

extern "C" void PrintModuleState() {
	cout << "\n=============== #" << instr_count << " INSTRUCTION ===============\n";
	bitset <16> instr(_curr_instr);
	cout << "Current instruction  = " << instr << "\n";
	for (int i = 0; i < 8; i++) {
		unsigned short regv = static_cast<unsigned short>(_box[i]);
		cout << "register #" << i << "          = " << regv << "\n";
	}
	cout << "========== ABOVE WAS THE BITTY GOLDEN MODEL ==========\n\n";
}


extern "C" void simulate_current_instruction() {
	instr_count++;
	_curr_instr = emu.NextInstruction();
	emu.Evaluate(_curr_instr);
	for (int i = 0; i < 8; i++) {
		_box[i] = emu.GetRegisterValue(i);
	}
}

extern "C" void read_all_instructions() {
	instr_count = 0;
	cout << "Start reading all of the instructions...\n";
	emu = BittyEmulator();
	emu.ReadMemory();
}

extern "C" uint16_t fetch_register_data_r0() {
	int pos = 0;
	_box[0] = emu.GetRegisterValue(pos);
	return _box[pos];
}	

extern "C" uint16_t fetch_register_data_r1() {
	int pos = 1;
	_box[1] = emu.GetRegisterValue(pos);
	return _box[pos];
}

extern "C" uint16_t fetch_register_data_r2() {
	int pos = 2;
	_box[2] = emu.GetRegisterValue(pos);
	return _box[pos];
}

extern "C" uint16_t fetch_register_data_r3() {
	int pos = 3;
	_box[3] = emu.GetRegisterValue(pos);
	return _box[pos];
}

extern "C" uint16_t fetch_register_data_r4() {
	int pos = 4;
	_box[4] = emu.GetRegisterValue(pos);
	return _box[pos];
}

extern "C" uint16_t fetch_register_data_r5() {
	int pos = 5;
	_box[5] = emu.GetRegisterValue(pos);
	return _box[pos];
}

extern "C" uint16_t fetch_register_data_r6() {
	int pos = 6;
	_box[6] = emu.GetRegisterValue(pos);
	return _box[pos];
}

extern "C" uint16_t fetch_register_data_r7() {
	int pos = 7;
	_box[7] = emu.GetRegisterValue(pos);
	return _box[pos];
} 
