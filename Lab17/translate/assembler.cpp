#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include "assembler.h"

using namespace std;

Assembler::Assembler(string input_file, bool console) {
    this->source_file = input_file;
    this->is_console_output = console;
}

bool Assembler::ReadInstructions() {
    ifstream fin;
    fin.open(this->source_file);
    if (!fin) {
        cout << "Could not open file " << this->source_file << "\n";
        return false;
    }
    string current_inst;
    while (getline(fin, current_inst)) {
        this->instructions.push_back(current_inst);
    }
    if (!fin.eof()) {
        cout << "Error reading the file " << this->source_file << "\n";
        return false; 
    }
    fin.close();
    return true;
}

bool Assembler::SetBinaryFile(string output_file) {
    ofstream fout;
    fout.open(output_file, ios_base::out | ios_base::trunc);
    if (!fout) {
        cout << "Cannot open file " << output_file << "\n";
        return false;
    }
    this->bin_file = output_file;
    fout.close();
    return true;
}

bool Assembler::AssembleCode() {

    auto SplitCmd = [](string instr) {
        vector <string> res;
        string curr;
        int it = 0;
        while (it < (int)(instr.size())) {
            if (instr.at(it) == ' ') {
                it++;
                continue;
            }
            int j = it;
            while (j + 1 < (int)(instr.size()) && instr.at(j + 1) != ' ') {
                j++;
            } 
            curr.clear();
            for (int k = it; k <= j; k++) {
                curr.push_back(instr.at(k));
            }
            res.push_back(curr);
            it = j + 1;
        }
        return res;
    };

    auto is_natural_number = [](string s) {
        for (int i = 0; i < (int)(s.size()); i++) {
            if (s[i] < '0' || '9' < s[i]) {
                return false;
            }
        }
        return true;
    }; 

    auto str_to_nbr = [](string str) {
        int val = 0;
        for (size_t it = 0; it < str.size(); it++) {
            val = val * 10 + (int)(str[it] - '0');
        }
        return val;
    };

    auto CreateInstruction = [](int rx, int ry, int alu, bool fmt, int imm) {
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
    };

    map <string, pair <int, bool>> keywords;
    map <string, int> registers_label;
    keywords["add"] = make_pair(0, false); keywords["sub"] = make_pair(1, false);
    keywords["and"] = make_pair(2, false); keywords["or"]  = make_pair(3, false);
    keywords["xor"] = make_pair(4, false); keywords["shl"] = make_pair(5, false);
    keywords["shr"] = make_pair(6, false); keywords["cmp"] = make_pair(7, false);
    keywords["addi"] = make_pair(0, true); keywords["subi"] = make_pair(1, true);
    keywords["andi"] = make_pair(2, true); keywords["ori"]  = make_pair(3, true);
    keywords["xori"] = make_pair(4, true); keywords["shli"] = make_pair(5, true);
    keywords["shri"] = make_pair(6, true); keywords["cmpi"] = make_pair(7, true);
    registers_label["r0"] = 0; registers_label["r1"] = 1;
    registers_label["r2"] = 2; registers_label["r3"] = 3;
    registers_label["r4"] = 4; registers_label["r5"] = 5;
    registers_label["r6"] = 6; registers_label["r7"] = 7;

    for (int id = 0; id < (int)(this->instructions.size()); id++) {
        vector <string> args = SplitCmd(this->instructions[id]);
        if ((int)(args.size()) != 3) {
            cout << "Incorrect number of operands in instruction #" << id + 1 << ": ";
            cout << this->instructions[id] << "n";
            return false;
        }
        if (keywords.find(args.front()) == keywords.end()) {
            cout << "Syntax error in #" << id + 1 << " -> ";
            cout << "No such instruction found: " << args.front() << "\n";
            return false;
        }
        pair <int, bool> specs = keywords[args.front()];
        if (specs.second) {
            if (registers_label.find(args[1]) == registers_label.end()) {
                cout << "Syntax error in #" << id + 1 << "\n";
                cout << "No such register found: " << args[1] << "\n";
                return false;
            }
            if (!is_natural_number(args[2])) {
                cout << "Syntax error in #" << id + 1 << "\n";
                cout << "Immediate value is not a decimal natural number: " << args[2] << "\n";
                return false;
            }
            int alu = specs.first;
            int rx = registers_label[args[1]];
            int imm = str_to_nbr(args[2]);
            this->binaries.push_back(CreateInstruction(rx, 0, alu, specs.second, imm));
        } else {
            if (registers_label.find(args[1]) == registers_label.end()) {
                cout << "Syntax error in #" << id + 1 << endl;
                cout << "The first operand is not a valid register: " << args[1] << "\n";
                return false;
            }
            if (registers_label.find(args[2]) == registers_label.end()) {
                cout << "Syntax error in #" << id + 1 << endl;
                cout << "The second operand is not a valid register: " << args[2] << "\n";
                return false;
            }
            int rx = registers_label[args[1]];
            int ry = registers_label[args[2]];
            int alu = specs.first;
            this->binaries.push_back(CreateInstruction(rx, ry, alu, specs.second, 0));
        }
    }

    return true;
}

bool Assembler::OutputBinary() {

    auto convert_bin_to_hex = [](string bin) {
        const char HH[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        unsigned short nbr = 0;
        for (int i = 0; i < 16; i++) {
            nbr = nbr * 2 + (int)(bin[i] - '0');
        }
        string res;
        for (int shift = 3; shift >= 0; shift--) {
            res.push_back(HH[((nbr >> (4 * shift)) & 15)]);
        }
        return res;
    };

    if (this->binaries.empty()) {
        cout << "Binaries are empty" << endl;
        return false;
    }
    if (this->is_console_output) {
        for (string bin : this->binaries) {
            cout << convert_bin_to_hex( bin ) << "\n";
        }
        return true;
    }
    ofstream fout;
    fout.open(this->bin_file, ios_base::out | ios_base::trunc);
    if (!fout) {
        cout << "Could not open file " << this->bin_file << "\n";
        return false;
    }
    for (string bin : this->binaries) {
        fout << convert_bin_to_hex( bin ) << "\n";
    }
    fout.close();
    return true;
}
