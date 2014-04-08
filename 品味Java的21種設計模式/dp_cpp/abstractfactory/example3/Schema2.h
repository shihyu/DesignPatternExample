#pragma once

#include "AbstractFactory.h"
#include "CPUApi.h"
#include "AMDCPU.h"
#include "MainboardApi.h"
#include "MSIMainboard.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {

///
/// <summary> * 装机方案二：AMD的CPU + 微星的主板
/// * 这里创建CPU和主板对象的时候，是对应的，能匹配上的 </summary>
///
class Schema2 : public AbstractFactory {
public:
    virtual CPUApi *createCPUApi();
    virtual MainboardApi *createMainboardApi();
};
}
}
}
}
}