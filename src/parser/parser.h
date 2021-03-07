#ifndef PARSER 
#define PARSER

#include <vector>

#include "../cpu/commands/all.h"

OpCode convertByteToOpCode(unsigned char initialByte);
char processNibble(unsigned char nibble);

class Parser {

        std::vector<OpCode> rawOpCodes; //stores the rom translated to raw opcodes
        Rom rom;

        //parses the raw binary ROM file into rawOpCodes. Translates all bytes to OpCode structs.
        void parseRawBinary(char* filename);
        void parseOpCodes();

    public:
        Parser();
        void parse(char* filename);
        


};




#endif

