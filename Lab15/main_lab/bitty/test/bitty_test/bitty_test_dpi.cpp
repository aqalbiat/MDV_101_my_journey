#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
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
	
	private:
	
		vector <uint16_t> registers_;
	
		uint16_t RunImmediate(uint16_t reg, uint16_t imm, uint16_t fun);
	
		uint16_t RunRegInstruction(uint16_t rx, uint16_t ry, uint16_t fun);
	
};

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

uint16_t _curr_instr;
uint16_t _box[8];
int instr_count;

struct BittyCoreSignals {

	unsigned short inst;
	
	BittyCoreSignals() {
		inst = 0;
	}
	
	BittyCoreSignals(string instruction) {
		inst = 0;
		for (size_t it = 0; it < instruction.size(); it++) {
			inst = 2 * inst + static_cast<unsigned short>(instruction[it] - '0');
		}
	}

	void write_to_tb() {
		_curr_instr = inst;
	}
	
};

BittyEmulator emu;
vector <string> fetch_i;
vector <BittyCoreSignals> signals;

string CreateInstruction(int rx, int ry, int alu, bool fmt, int imm) {
	bool r[16] = {false};
	// destination operator
	r[0] = ((rx >> 2) & 1);
	r[1] = ((rx >> 1) & 1);
	r[2] = ((rx >> 0) & 1);
	// source operator
	r[3] = ((ry >> 2) & 1);
	r[4] = ((ry >> 1) & 1);
	r[5] = ((ry >> 0) & 1);
	// alu select
	r[11] = ((alu >> 2) & 1);
	r[12] = ((alu >> 1) & 1);
	r[13] = ((alu >> 0) & 1);
	if (fmt) {
		for (int pos = 3, shift = 7; pos < 11; pos++, shift--) {
			r[pos] = ((imm >> shift) & 1);
		}
		r[14] = false;
		r[15] = true;
	} else {
		r[14] = r[15] = false;
	}
	string str;
	for (int i = 0; i < 16; i++) {
		str.push_back(r[i] ? '1' : '0');
	}	
	return str;
}

vector <string> generate_instructions() {
	vector <string> result;
	// rx, ry, alu_sel, fmt, immediate
	result.push_back(CreateInstruction(1, 0, 0, true, 90)); 
	result.push_back(CreateInstruction(2, 0, 0, true, 23)); 
	result.push_back(CreateInstruction(1, 2, 0, false, 0)); 
	result.push_back(CreateInstruction(3, 0, 0, true, 144)); 
	result.push_back(CreateInstruction(4, 0, 0, true, 23)); 
	result.push_back(CreateInstruction(3, 4, 1, false, 0)); 
	result.push_back(CreateInstruction(0, 0, 0, false, 0)); 
	return result;
}


extern "C" void PrintModuleState() {
	cout << "\n=============== #" << instr_count << " INSTRUCTION ===============\n";
	bitset <16> instr(_curr_instr);
	cout << "Current instruction  = " << instr << "\n";
	for (int i = 0; i < 8; i++) {
		unsigned short regv = static_cast<unsigned short>(_box[i]);
		cout << "register #" << i << "          = " << (short)(regv) << "\n";
	}
	cout << "========== ABOVE WAS THE BITTY GOLDEN MODEL ==========\n\n";
}


extern "C" void simulate_current_instruction() {
	instr_count++;
	emu.Evaluate(signals[instr_count - 1].inst);
	for (int i = 0; i < 8; i++) {
		_box[i] = emu.GetRegisterValue(i);
	}
}

extern "C" void generate_all_instructions() {
	instr_count = 0;
	cout << "Start generating all of the instructions...\n";
	emu = BittyEmulator();
	fetch_i = generate_instructions();

	for (int i = 0; i < static_cast<int>(fetch_i.size()); i++) {
		signals.push_back(BittyCoreSignals(fetch_i[i]));
	}

	if (_ONLY_SAMPLE_TESTS_RUN_) return;

	const int single = 62500;

	srand(137);

	cout << "\n ========== GENERATE IMMEDIATE INSTRUCTIONS ==========\n";
	for (uint16_t fn = 0; fn < 8; fn++) {
        for (int iter = 0; iter < single; iter++) {
            // prepare inputs
            uint16_t rx = (int16_t)(rand() % 8);
            uint16_t imm = (int16_t)(rand() % 256);
            // insert into signals
			signals.push_back(BittyCoreSignals(CreateInstruction(rx, 0, fn, true, imm)));
		}
	}

    cout << "\n ========== GENERATE REGISTERS INSTRUCTIONS ==========\n";
    for (uint16_t fn = 0; fn < 8; fn++) {
        for (int iter = 0; iter < single; iter++) {
            // prepare inputs
            uint16_t rx = (uint16_t)(rand() % 8);
            uint16_t ry = (uint16_t)(rand() % 8);
            // insert into signals
			signals.push_back(BittyCoreSignals(CreateInstruction(rx, ry, fn, false, 0)));
        }
    }

	cout << "\n\n   <<<<< The construction of main tests ended >>>>>   \n\n";

}

extern "C" uint16_t fetch_next_instruction() {
	assertm(!signals.empty(), "Signals array is empty");
	signals[instr_count].write_to_tb();
	return _curr_instr;
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
