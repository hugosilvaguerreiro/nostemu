#ifndef PARSER 
#define PARSER

#include <vector>

class OpCode {
    public:
        char first_part;
        char second_part;
        bool is_cb = false;

        OpCode(char first, char second, bool is_cb) : 
                first_part(first), second_part(second), is_cb(is_cb) {}

        OpCode(char first, char second) : OpCode(first, second, false) {}
};


class Parser {
        OpCode convertByteToOpCode(unsigned char initialByte);
        char processNibble(unsigned char nibble);

        std::vector<OpCode> rawOpCodes; //stores the rom translated to raw opcodes

    public:
        Parser();
        
        //parses the raw binary ROM file into rawOpCodes. Translates all bytes to OpCode structs.
        void parse(char* filename);

};




#endif

