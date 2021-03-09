#ifndef ROM
#define ROM
#include <vector>
#include "command.h"

/*
* This class represents the cartridge. It is the first command of every game. Holds all the instructions of the game
*/

class Rom : public Command {

    public:
        std::vector<Command*> instructions;

        Rom() : instructions() {}

        void addInstruction(Command& c) {
            instructions.push_back(&c);
        }

        void accept(ROMRunner& runner) override {
            
        };
};

#endif