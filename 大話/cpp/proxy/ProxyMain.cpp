#include "ProxyMain.h"
using namespace proxy;

int main() {
    SchoolGirl* mm = new SchoolGirl("jin ");
    Proxy* agent = new Proxy(mm);
    agent->giveChocolate();
    agent->giveFlowers();
}
