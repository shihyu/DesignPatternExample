#include "ConcreteFactory1.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example2 {

AbstractProductA *ConcreteFactory1::createProductA() {
    return new ProductA1();
}

AbstractProductB *ConcreteFactory1::createProductB() {
    return new ProductB1();
}
}
}
}
}
}
