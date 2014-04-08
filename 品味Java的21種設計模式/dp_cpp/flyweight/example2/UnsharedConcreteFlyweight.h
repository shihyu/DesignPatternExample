#pragma once

#include "Flyweight.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example2 {

///
/// <summary> * 不需要共享的Flyweight对象，
/// * 通常是将被共享的享元对象作为子节点，组合出来的对象 </summary>
///
class UnsharedConcreteFlyweight : public Flyweight {
    ///
    ///  <summary> * 示例，描述对象的状态 </summary>
    ///
private:
    std::string allState;

public:
    virtual void operation(std::string extrinsicState);
};

}
}
}
}
}