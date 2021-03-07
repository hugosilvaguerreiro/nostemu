#ifndef ROMRUNNER
#define ROMRUNNER

#include "../cpu/commands/all_fd.h"

class ROMRunner {
    public:
        virtual void visitNOP(NOP& nop) = 0;
};

#endif