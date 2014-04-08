#include "ConcretePrototype1.h"

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example2 {

Prototype *ConcretePrototype1::clone() {
    //最简单的克隆，新建一个自身对象，由于没有属性，就不去复制值了
    Prototype *prototype = new ConcretePrototype1();
    return prototype;
}
}
}
}
}
}
