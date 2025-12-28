#include <iostream>
#include "bitty_emu.h"

using namespace std;

int main() {
    BittyEmulator emu = BittyEmulator();
    cout << " ========== INITIALIZING ========== \n";
    emu.ReadMemory();
    for (int pc = 1; pc <= emu.GetAmountOfInstructions(); pc++) {
        emu.Evaluate(emu.NextInstruction());
        cout << "\nCurrent state of registers:\n";
        for (int reg = 0; reg < 8; reg++) {
            cout << "#" << reg << " - " << emu.GetRegisterValue(reg) << "\n";
        } 
        cout << "\n";
    }
    return 0;
}