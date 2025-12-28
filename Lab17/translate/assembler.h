#ifndef ASSEMBLER_
#define ASSEMBLER_

#include <vector>
#include <string>

using namespace std;

class Assembler {

    public:

        Assembler(string input_file, bool console);
        
        bool ReadInstructions();

        bool SetBinaryFile(string output_file);

        bool AssembleCode();

        bool OutputBinary();

    private:
    
        bool is_console_output;
        string source_file,  bin_file;
        vector <string> instructions, binaries;

};

#endif 
