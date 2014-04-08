#pragma once

#include "Colleague.h"
#include "Mediator.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example1 {
///
/// <summary> * 具体的同事类B </summary>
///
class ConcreteColleagueB : public Colleague {
public:
    ConcreteColleagueB(Mediator *mediator);
    ///
    ///  <summary> * 示意方法，执行某些业务功能 </summary>
    ///
    virtual void someOperation();
};


}
}
}
}
}