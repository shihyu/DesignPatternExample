#include "ConcreteDecoratorA.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example3 {

ConcreteDecoratorA::ConcreteDecoratorA(Component *component) : Decorator(component) {
}

std::string ConcreteDecoratorA::getAddedState() {
    return addedState;
}

void ConcreteDecoratorA::setAddedState(std::string addedState) {
    this->addedState = addedState;
}

void ConcreteDecoratorA::operation() {
    //调用父类的方法，可以在调用前后执行一些附加动作
    //在这里进行处理的时候，可以使用添加的状态
    Decorator::operation();
}
}
}
}
}
}
