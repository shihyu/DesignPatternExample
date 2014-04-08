#include "ConcreteDecoratorB.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example3 {

ConcreteDecoratorB::ConcreteDecoratorB(Component *component) : Decorator(component) {
}

void ConcreteDecoratorB::addedBehavior() {
    //需要添加的职责实现
}

void ConcreteDecoratorB::operation() {
    //调用父类的方法，可以在调用前后执行一些附加动作
    Decorator::operation();
    addedBehavior();
}
}
}
}
}
}
