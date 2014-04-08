#pragma once

#include "AbstractFactory.h"
#include "IntelCPU.h"
#include "GAMainboard.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example4 {

///
/// <summary> * 装机方案一：Intel 的CPU + 技嘉的主板
/// * 这里创建CPU和主板对象的时候，是对应的，能匹配上的 </summary>
///
class Schema1 : public AbstractFactory {
public:
    virtual object *createProduct(int type);
};
}
}
}
}
}