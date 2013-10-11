#include "Proxy.h"

namespace proxy {

    Proxy::Proxy(SchoolGirl* mm) {
        this->gg = new Pursuit(mm);
    }

    void Proxy::giveChocolate() {
        gg->giveChocolate();
    }

    void Proxy::giveDolls() {
        gg->giveDolls();
    }

    void Proxy::giveFlowers() {
        gg->giveFlowers();
    }
}