#include "verilated.h"
#include "Vmemory.h"

#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdint>
#include <cstdlib>
#include <string>
#include <random>

using namespace std;

const char HH[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
string to_hex(uint16_t current) {
    string res;
    res.push_back(HH[((current  >>  12) & 15)]);
    res.push_back(HH[((current  >>   8) & 15)]);
    res.push_back(HH[((current  >>   4) & 15)]);
    res.push_back(HH[((current  >>   0) & 15)]);
    return res;
}

vector <uint16_t> memory;
void generate_all_the_data() {
    ofstream fout;
    fout.open("./storage/archive.txt", ofstream::out | ofstream::trunc);
    for (int i = 0; i < 256; i++) {
        memory.push_back((rand() & 65535));
        fout << to_hex(static_cast<uint16_t>(memory.back())) << "\n";
    }
    fout.close();
}

void WriteSignals(Vmemory *tb, bool clk_s, bool load_s, uint16_t addr_s) {
    tb->clk   =  clk_s;
    tb->load  =  load_s;
    tb->addr  =  addr_s;
    tb->eval();
}

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);

    srand(19337);
    generate_all_the_data();


    vector <int> address;
    for (int i = 0; i < 256; i++) {
        address.push_back(i);
    }
    shuffle(address.begin(), address.end(), default_random_engine(307));

    Vmemory *tb = new Vmemory;

    WriteSignals(tb, false, true, 0);
    WriteSignals(tb, true, true, 0);
    WriteSignals(tb, false, true, 0);

    int good = 0;
    for (int i = 0; i < 256; i++) {
        WriteSignals(tb, true, false, address[i]);
        WriteSignals(tb, false, false, address[i]);
        cout << "query #" << i << ": ";
        if (static_cast<uint16_t>(tb->out) == memory[address[i]]) {
            cout << "ok\n";
            good++;
        } else {
            cout << "bad\n";
            cout << "DUT value = " << static_cast<uint16_t>(tb->out) << "\n";
            cout << "Sim value = " << memory[address[i]] << "\n";
        }
    }
    cout << "SUCCESS RATE = " << good << "/256\n";

    return 0;
}
