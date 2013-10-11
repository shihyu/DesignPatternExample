#include "ProxyMain.h"

namespace proxy {

    void ProxyMain::main(std::string args[]) {
        SchoolGirl* mm = new SchoolGirl("jin ");
        Proxy* agent = new Proxy(mm);
        agent->giveChocolate();
        agent->giveFlowers();
    }
}