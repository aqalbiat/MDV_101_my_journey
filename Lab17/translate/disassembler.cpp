#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include "disassembler.h"

using namespace std;

Disassembler::Disassembler(string input_file, bool console) {
    this->binary_file = input_file;
    this->is_console_output = console;
}

bool Disassembler::ReadBinaries() {
    ifstream fin;
    fin.open(this->binary_file);
    if (!fin) {
        cout << "Could not open file " << this->binary_file << "\n";
        return false;
    }
    string current_bin;
    while (fin >> current_bin) {
        this->binaries.push_back(current_bin);
    }
    if (!fin.eof()) {
        cout << "Error reading the file " << this->binary_file << "\n";
        return false; 
    }
    fin.close();
    return true;
}

bool Disassembler::SetInstructionFile(string output_file) {
    ofstream fout;
    fout.open(output_file, ios_base::out | ios_base::trunc);
    if (!fout) {
        cout << "Cannot open file " << output_file << "\n";
        return false;
    }
    this->instr_file = output_file;
    fout.close();
    return true;
}

bool Disassembler::DisassembleCode() {
    if (this->binaries.empty()) {
        cout << "Binaries container is empty\n";
        return false;
    }
    
    auto convert_to_uint16 = [](string hex_line) {
        const char HH[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        uint16_t res = 0;
        for (int i = 0; i < (int)(hex_line.size()); i++) {
            uint16_t digit = 0;
            while (HH[digit] != hex_line[i]) {
                digit++;
            }
            res = (res << 4) + digit;
        }
        return res;
    };

    auto nbr_to_str = [](int val) {
        string res;
        if (val == 0) {
            res.push_back('0');
        }
        while (val != 0) {
            res.push_back((char)('0' + (val % 10)));
            val /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    };

    string specs[2][8] = {
        {"add", "sub", "and", "or", "xor", "shl", "shr", "cmp"},
        {"addi", "subi", "andi", "ori", "xori", "shli", "shri", "cmpi"}
    };
    string regs[8] = {"r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7"};

    for (int idx = 0; idx < (int)(this->binaries.size()); idx++) {
        uint16_t curr_bin = convert_to_uint16(this->binaries.at(idx));
        int fmt = (int)(curr_bin & 3);
        int rx = (int)((curr_bin >> 13) & 7);
        int ry = (int)((curr_bin >> 10) & 7);
        int alu_sel = (int)((curr_bin >> 2) & 7);
        int imm = (int)((curr_bin >> 5) & 255);
        string result_instr;
        result_instr = specs[fmt][alu_sel];
        switch (fmt) {
            case 0: {
                result_instr += " ";
                result_instr += regs[rx];
                result_instr += " ";
                result_instr += regs[ry];
                break;
            }
            case 1: {
                result_instr += " ";
                result_instr += regs[rx];
                result_instr += " ";
                result_instr += nbr_to_str(imm);
                break;
            }
            default: {
                cout << "Unsupported format\n";
                return false;
            }
        }
        this->instructions.push_back(result_instr);
    }

    return true;
}

bool Disassembler::OutputInstructions() {
    if (this->instructions.empty()) {
        cout << "Binaries are empty" << endl;
        return false;
    }
    if (this->is_console_output) {
        for (string instr : this->instructions) {
            cout << instr << "\n";
        }
        return true;
    }
    ofstream fout;
    fout.open(this->instr_file, ios_base::out | ios_base::trunc);
    if (!fout) {
        cout << "Could not open file " << this->instr_file << "\n";
        return false;
    }
    for (string instr : this->instructions) {
        fout << instr << "\n";
    }
    fout.close();
    return true;
}
