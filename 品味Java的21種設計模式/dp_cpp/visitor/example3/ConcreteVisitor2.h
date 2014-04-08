#pragma once

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example3 {
///
/// <summary> * 具体的访问者实现 </summary>
///
class ConcreteVisitor2 : public Visitor {
public:
    virtual void visitConcreteElementA(ConcreteElementA *element);
    virtual void visitConcreteElementB(ConcreteElementB *element);
};
}
}
}
}
}