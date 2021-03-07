#include <iostream>

#include "ROMRunner.h"

class TranslatorROMRunner : ROMRunner {
    void visitNOP(NOP nop) {
        std::cout << "NOP\n";
    }
};