#include "DecoraterMain.h"
#include <iostream>
using namespace decorator;

int main() {
    Person* lin = new Person("Lincoln");
    std::cout << "The first show:" << std::endl;
    Sneaker* s = new Sneaker();
    Hat* h = new Hat();
    s->decorate(lin);
    h->decorate(s);
    h->show();
    return 0;
}
