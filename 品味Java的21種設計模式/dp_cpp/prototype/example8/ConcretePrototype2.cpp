#include "ConcretePrototype2.h"

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example8 {

std::string ConcretePrototype2::getName() {
    return name;
}

void ConcretePrototype2::setName(std::string name) {
    this->name = name;
}

Prototype *ConcretePrototype2::clone() {
    ConcretePrototype2 *prototype = new ConcretePrototype2();
    prototype->setName(this->name);
    return prototype;
}

std::string ConcretePrototype2::ToString() {
    return "Now in Prototype2，name=" + name;
}
}
}
}
}
}
