#ifndef TRANSLATORROMRUNNER
#define TRANSLATORROMRUNNER

#include <iostream>
#include "rom_runner.h"

class TranslatorROMRunner : public  ROMRunner {
    public:
        TranslatorROMRunner() {}
        void visitNOP(NOP& nop) {
            std::cout << "NOP\n";
        }
};

#endif