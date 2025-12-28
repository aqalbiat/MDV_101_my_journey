#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include "assembler.h"
#include "disassembler.h"

using namespace std;

vector <string> get_arguments(int argc, char **argv);
string get_value(string name, vector <string> arg);
bool exists(string name, vector <string> arg);

int main(int argc, char **argv) {
    vector <string> arguments;
    arguments = get_arguments(argc, argv);
    string input, output;
    if (!exists("i", arguments)) {
        cout << "Usage: asm -i <input_file> [-o <output_file>] -a|-d\n";
        exit(-1);
    }
    bool is_a, is_d, console;
    input = get_value("i", arguments);
    if (exists("o", arguments)) {
        output = get_value("o", arguments);
        console = false;
    } else {
        output = "#";
        console = true;
    }
    is_a = exists("a", arguments);
    is_d = exists("d", arguments);
    if (is_a == is_d) {
        string ans1 = "Both -a and -d cannot be applied";
        string ans2 = "Nor -a and -d were not applied";
        cout << (is_a ? ans1 : ans2) << "\n";
        exit(-1);
    }
    if (is_a) {
        Assembler machine = Assembler(input, console);
        if (!console) {
            assert(machine.SetBinaryFile(output));
        }
        assert(machine.ReadInstructions());
        assert(machine.AssembleCode());
        assert(machine.OutputBinary());
    } else {
        Disassembler machine = Disassembler(input, console);
        if (!console) {
            assert(machine.SetInstructionFile(output));
        }
        assert(machine.ReadBinaries());
        assert(machine.DisassembleCode());
        assert(machine.OutputInstructions());
    }
    return 0;
}

vector <string> get_arguments(int argc, char **argv) {
    vector <string> result;
    for (int i = 1; i < argc; i++) {
        int len = strlen(argv[i]);
        string current;
        for (int pos = 0; pos < len; pos++) {
            current.push_back(argv[i][pos]);
        }
        result.push_back(current);
    }
    return result;
}

string get_value(string name, vector <string> arg) {
    for (int i = 0; i + 1 < (int)(arg.size()); i++) {
        if (arg[i] == "-" + name) {
            return arg[i + 1];
        }
    }
    if (arg.back() == "-" + name) {
        cout << "The argument -" << name << " is provided but value is not\n";
        exit(-1);
    }
    return "#";
}

bool exists(string name, vector <string> arg) {
    for (int i = 0; i < (int)(arg.size()); i++) {
        if (arg[i] == "-" + name) {
            return true;
        }
    }
    return false;
}
