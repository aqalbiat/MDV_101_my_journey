#ifndef BITTY_EMU_
#define BITTY_EMU_

#include <cstdint>
#include <vector>

using namespace std;

class BittyEmulator {

public:

	BittyEmulator();

	uint16_t Evaluate(uint16_t instruction);

	uint16_t GetRegisterValue(uint16_t reg_num);

	void ReadMemory();

	uint16_t GetAmountOfInstructions();

    uint16_t NextInstruction();

private:

	uint16_t addr_;
	vector <uint16_t> registers_;
	vector <uint16_t> instructions_;

	uint16_t RunImmediate(uint16_t reg, uint16_t imm, uint16_t fun);

	uint16_t RunRegInstruction(uint16_t rx, uint16_t ry, uint16_t fun);

	uint16_t ConvertHexToNumber(string blob);

};

#endif
