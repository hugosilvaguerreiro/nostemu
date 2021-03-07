#ifndef ROMRUNNER
#define ROMRUNNER

class NOP;

class ROMRunner {
    virtual void visitNOP(NOP nop) = 0;
};

#endif