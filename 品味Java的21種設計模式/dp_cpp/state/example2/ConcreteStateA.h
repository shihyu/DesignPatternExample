#pragma once

#include "State.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example2 {


///
/// <summary> * 实现一个与Context的一个特定状态相关的行为 </summary>
///
class ConcreteStateA : public State {
public:
    virtual void handle(std::string sampleParameter);
};
}
}
}
}
}