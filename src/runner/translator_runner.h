#ifndef TRANSLATORROMRUNNER
#define TRANSLATORROMRUNNER

#include <iostream>
#include "rom_runner.h"
#include "../core/commands/all.h"

class TranslatorROMRunner : public  ROMRunner {
    public:
        Rom rom;

        TranslatorROMRunner() {}
        void visitROM(Rom& rom) override {
            for(Command* c : rom.instructions) {
                c->accept(*this);
            }
        }

        void visitNOP(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitADC(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitADD(NOP& nop) override {
            std::cout << "ADD\n";
        }
        void visitAND(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitCP(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitDEC(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitINC(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitOR(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSBC(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSUB(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitXOR(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitBIT(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRES(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSET(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRET(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRETI(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRST(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitLDD(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitLD(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitCCF(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitCPL(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitDAA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitDI(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitEI(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitHALT(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSCF(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSTOP(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSWAP(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRLA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRLCA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRLC(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRL(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRRA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRRCA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRRC(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitRR(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSLA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSRA(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitSRL(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitPOP(NOP& nop) override {
            std::cout << "NOP\n";
        }
        void visitPUSH(NOP& nop) override {
            std::cout << "NOP\n";
        }
};

#endif