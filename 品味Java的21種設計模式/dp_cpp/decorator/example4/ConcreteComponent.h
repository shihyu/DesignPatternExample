#pragma once

#include "Component.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example4 {


///
/// <summary> * 基本的实现计算奖金的类，也是被装饰器装饰的对象 </summary>
///
class ConcreteComponent : public Component {

public:
    virtual double calcPrize(std::string user, Date *begin, Date *end);
};

}
}
}
}
}