#include "DecoraterMain.h"

namespace decorator {

    void DecoraterMain::main(std::string args[]) {
        Person* lin = new Person("Lincoln");
        puts("The first show:");
        Sneaker* s = new Sneaker();
        Hat* h = new Hat();
        s->decorate(lin);
        h->decorate(s);
        h->show();
    }
}