#include "UnsharedConcreteFlyweight.h"

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example5 {

void UnsharedConcreteFlyweight::add(Flyweight *f) {
    list.push_back(f);
}

bool UnsharedConcreteFlyweight::match(std::string securityEntity, std::string permit) {
    for (std::vector<Flyweight *>::const_iterator f = list.begin(); f != list.end(); ++f) {
        //递归调用
        if ((*f)->match(securityEntity, permit)) {
            return true;
        }
    }

    return false;
}
}
}
}
}
}
