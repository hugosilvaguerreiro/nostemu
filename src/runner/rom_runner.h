#ifndef ROMRUNNER
#define ROMRUNNER

#include "../core/commands/all_fd.h"

class ROMRunner {
    
    public:
        virtual void visitROM(Rom& rom) = 0;
        virtual void visitNOP(NOP& nop) = 0;
        virtual void visitADC(NOP& nop) = 0;
        virtual void visitADD(NOP& nop) = 0;
        virtual void visitAND(NOP& nop) = 0;
        virtual void visitCP(NOP& nop) = 0;
        virtual void visitDEC(NOP& nop) = 0;
        virtual void visitINC(NOP& nop) = 0;
        virtual void visitOR(NOP& nop) = 0;
        virtual void visitSBC(NOP& nop) = 0;
        virtual void visitSUB(NOP& nop) = 0;
        virtual void visitXOR(NOP& nop) = 0;
        virtual void visitBIT(NOP& nop) = 0;
        virtual void visitRES(NOP& nop) = 0;
        virtual void visitSET(NOP& nop) = 0;
        virtual void visitRET(NOP& nop) = 0;
        virtual void visitRETI(NOP& nop) = 0;
        virtual void visitRST(NOP& nop) = 0;
        virtual void visitLDD(NOP& nop) = 0;
        virtual void visitLD(NOP& nop) = 0;
        virtual void visitCCF(NOP& nop) = 0;
        virtual void visitCPL(NOP& nop) = 0;
        virtual void visitDAA(NOP& nop) = 0;
        virtual void visitDI(NOP& nop) = 0;
        virtual void visitEI(NOP& nop) = 0;
        virtual void visitHALT(NOP& nop) = 0;
        virtual void visitSCF(NOP& nop) = 0;
        virtual void visitSTOP(NOP& nop) = 0;
        virtual void visitSWAP(NOP& nop) = 0;
        virtual void visitRLA(NOP& nop) = 0;
        virtual void visitRLCA(NOP& nop) = 0;
        virtual void visitRLC(NOP& nop) = 0;
        virtual void visitRL(NOP& nop) = 0;
        virtual void visitRRA(NOP& nop) = 0;
        virtual void visitRRCA(NOP& nop) = 0;
        virtual void visitRRC(NOP& nop) = 0;
        virtual void visitRR(NOP& nop) = 0;
        virtual void visitSLA(NOP& nop) = 0;
        virtual void visitSRA(NOP& nop) = 0;
        virtual void visitSRL(NOP& nop) = 0;
        virtual void visitPOP(NOP& nop) = 0;
        virtual void visitPUSH(NOP& nop) = 0;
};

#endif