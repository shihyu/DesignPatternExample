#pragma once

#include "AbstractClass.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example3 {

///
/// <summary> * 具体实现类，实现原语操作 </summary>
///
class ConcreteClass : public AbstractClass {
public:
    virtual void doPrimitiveOperation1();
    virtual void doPrimitiveOperation2();
};


}
}
}
}
}