#ifndef OPCODE
#define OPCODE



class OpCode {
    public:
        char first_part;
        char second_part;
        unsigned char originalByte;
        bool is_cb = false;

        OpCode(char first, char second, unsigned char originalByte, bool is_cb) : 
                first_part(first), second_part(second), originalByte(originalByte), is_cb(is_cb) {}

        OpCode(char first, char second, unsigned char originalByte) : OpCode(first, second, originalByte, false) {}
};

#endif