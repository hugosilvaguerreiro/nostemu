#ifndef COMMAND
#define COMMAND

#include "../../runner/rom_runner.h"
#include "../opcode.h"


class Command {
    public:
    // This function is used to execute the operation;
    virtual void accept(ROMRunner& runner) = 0;
};

#endif