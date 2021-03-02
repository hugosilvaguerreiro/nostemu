#include "renderer.h"


class Nostemu : public Application {
    Renderer* r;

    public:
        Nostemu(Renderer *r) {
            this->r = r;
        }

        void execute() {
            r->renderFrame();
        }

        void stop() {
            
        }
};

int main()
{   
    WINDOW_SIZE size = {160, 144}; //window resolution

    Renderer* r = new Renderer(size, "nostemu");
    
    Nostemu* n = new Nostemu(r);

    r->start(n);

}
