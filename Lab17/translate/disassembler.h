#ifndef DISASSEMBLER_
#define DISASSEMBLER_

#include <vector>
#include <string>

using namespace std;

class Disassembler {

    public:

        Disassembler(string input_file, bool console);
        
        bool ReadBinaries();

        bool SetInstructionFile(string output_file);

        bool DisassembleCode();

        bool OutputInstructions();

    private:
    
        bool is_console_output;
        string binary_file,  instr_file;
        vector <string> instructions, binaries;

};

#endif
