#ifndef OPCODE
#define OPCODE



class OpCode {
    public:
        char first_part;
        char second_part;
        bool is_cb = false;

        OpCode(char first, char second, bool is_cb) : 
                first_part(first), second_part(second), is_cb(is_cb) {}

        OpCode(char first, char second) : OpCode(first, second, false) {}
};

#endif