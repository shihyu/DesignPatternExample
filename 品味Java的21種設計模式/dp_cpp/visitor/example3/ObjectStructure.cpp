#include "ObjectStructure.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example3 {

void ObjectStructure::handleRequest(Visitor *visitor) {
    //循环对象结构中的元素，接受访问
    for (Collection<Element *>::const_iterator ele = col->begin(); ele != col->end(); ++ele) {
        (*ele)->accept(visitor);
    }
}

void ObjectStructure::addElement(Element *ele) {
    this->col->add(ele);
}
}
}
}
}
}
