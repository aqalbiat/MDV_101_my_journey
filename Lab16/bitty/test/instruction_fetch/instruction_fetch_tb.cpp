#include "verilated.h"
#include "Vinstruction_fetch.h"

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const char HH[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
uint16_t convert(string s) {
    uint16_t res = 0;
    for (int i = 0; i < (int)(s.size()); i++) {
        int d = 0;
        for (int j = 0; j < 16; j++) {
            if (HH[j] == s[i]) {
                d = j;
                break;
            }
        }
        res = res * 16 + (uint16_t)(d);
    }
    return res;
}

vector <uint16_t> inst;
void read_instructions() {
    ifstream fin;
    fin.open("./storage/archive.txt");
    string s;
    while (fin >> s) {
        inst.push_back(convert(s));
    }
    fin.close();
    while ((int)(inst.size()) < 256) {
        inst.push_back(0);
    }
}

void WriteSignals(Vinstruction_fetch *tb, bool clk_s, bool reset_s, bool load_s, bool en_s) {
    tb->clk = clk_s;
    tb->reset = reset_s;
    tb->load = load_s;
    tb->en_pc = en_s;
    tb->eval();
}

int main(int argc, char**argv) {

    Verilated::commandArgs(argc, argv);

    read_instructions();

    Vinstruction_fetch *tb = new Vinstruction_fetch;

    WriteSignals(tb, false, true, true, false);
    WriteSignals(tb, true, true, true, false);
    WriteSignals(tb, false, true, true, false);

    int good = 0;
    for (int i = 0; i < 256; i++) {
        WriteSignals(tb, true, false, false, true);
        WriteSignals(tb, false, false, false, true);
        cout << "query #" << (i + 1) << ": ";
        if (static_cast<uint16_t>(tb->out) == inst[i]) {
            cout << "ok\n";
            good++;
        } else {
            cout << "bad\n";
            cout << "DUT value = " << static_cast<uint16_t>(tb->out) << "\n";
            cout << "Sim value = " << inst[i] << "\n";
        }
    }
    cout << "Success rate = " << good << "/256\n";

    return 0;
}
