#include "AdapterMain.h"

namespace adapter {

    void AdapterMain::main(std::string args[]) {
        Player* guard = new Guard("Alston");
        guard->attrack();
        guard->defence();
        Player* center = new Translator("YM");
        center->attrack();
        center->defence();
    }
}