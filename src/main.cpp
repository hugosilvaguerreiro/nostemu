#include <cstdlib>

#include "core/commands/all.h"
#include "renderer.h"
#include "parser/parser.h"
#include "runner/translator_runner.h"


class Nostemu : public Application {
    Renderer* renderer;
    Parser parser;
    char* rom;
    TranslatorROMRunner tr;

    public:
        Nostemu(Renderer* r, char* rom) {
            this->renderer = r;
            this->rom = rom;

            this->parser = Parser();
            parser.parse(rom);

        }

        void execute() {
        /*
        * This function is called every frame
        */
            tr.visitROM(parser.rom);
            //renderer->renderFrame();
            std::cout << parser.rom.instructions.size() << "\n";
            exit(0);
        }

        void stop() {
            
        }
};

int main(int argc, char *argv[])
{   
    WINDOW_SIZE size = {160, 144}; //window resolution

    Renderer r(size, "nostemu");
    
    if(argc == 1) {
        std::cout << "Error: please specify the location of the ROM\n";
    } else {
        Nostemu n(&r, argv[1]);
        r.start(n);
    }

}
