#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstdint>
#include <fstream>

using namespace std;

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

unsigned short convert(string instruction) {
    unsigned short inst = 0;
    for (size_t it = 0; it < instruction.size(); it++) {
        inst = 2 * inst + static_cast<unsigned short>(instruction[it] - '0');
    }
    return inst;
}

const char HH[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
string to_hex(uint16_t current) {
    string res;
    res.push_back(HH[((current  >>  12) & 15)]);
    res.push_back(HH[((current  >>   8) & 15)]);
    res.push_back(HH[((current  >>   4) & 15)]);
    res.push_back(HH[((current  >>   0) & 15)]);
    return res;
}

int main(int argc, char **argv) {

    int N = abs(atoi(argv[1])) % 256;
    int seed = atoi(argv[2]);
    srand(seed);

    ofstream fout;
    fout.open("./storage/archive.txt", ofstream::out | ofstream::trunc);

    for (int i = 0; i < N; i++) {
        int points = abs(rand()) % 100 + 1;
        if (points <= 70) {
            // Construct an Immediate instruction
            int  rx = abs(rand()) % 8;
            int alu = abs(rand()) % 8;
            int imm = abs(rand()) % 256;
            unsigned short instr = convert(CreateInstruction(rx, 0, alu, true, imm));
            fout << to_hex(static_cast<uint16_t>(instr)) << "\n";
        } else {
            // Construct a Register instruction
            int rx  = abs(rand()) % 8;
            int ry  = abs(rand()) % 8;
            int alu = abs(rand()) % 8;
            unsigned short instr = convert(CreateInstruction(rx, ry, alu, false, 0));
            fout << to_hex(static_cast<uint16_t>(instr)) << "\n";
        }
    }

    fout.close();

    return 0;
}