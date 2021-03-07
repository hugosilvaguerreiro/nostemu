#ifndef CPU_NOP
#define CPU_NOP

#include "../command.h"


class NOP : public Command {
    public:
        NOP() {}

        void accept(ROMRunner& runner) override {
            runner.visitNOP(*this);
        }
};

#endif