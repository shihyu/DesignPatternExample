#pragma once

#include "Implementor.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example5 {

///
/// <summary> * 真正的具体实现对象 </summary>
///
class ConcreteImplementorB : public Implementor {
public:
    virtual void operationImpl();
};
}
}
}
}
}