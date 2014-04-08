#pragma once

#include "Decorator.h"
#include "Component.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example3 {

///
/// <summary> * 装饰器的具体实现对象，向组件对象添加职责 </summary>
///
class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component *component);
    ///
    ///  <summary> * 需要添加的职责 </summary>
    ///
private:
    void addedBehavior();
public:
    virtual void operation();
};


}
}
}
}
}