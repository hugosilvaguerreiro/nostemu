#ifndef PARSER 
#define PARSER

#include <vector>

#include "../core/commands/all.h"
#include "../core/opcode.h"

OpCode convertByteToOpCode(unsigned char initialByte);
char processNibble(unsigned char nibble);

class Parser {

        std::vector<OpCode> rawOpCodes; //stores the rom translated to raw opcodes
        

        //parses the raw binary ROM file into rawOpCodes. Translates all bytes to OpCode structs.
        void parseRawBinary(char* filename);
        void parseOpCodes();

    public:
        Rom rom;
        
        Parser();
        void parse(char* filename);
        


};




#endif

