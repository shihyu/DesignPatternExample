#pragma once

#include "CPUApi.h"
#include "MainboardApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {
///
/// <summary> * 抽象工厂的接口，声明创建抽象产品对象的操作 </summary>
///
class AbstractFactory {
    ///
    ///  <summary> * 创建CPU的对象 </summary>
    ///  * <returns> CPU的对象 </returns>
    ///
public:
    virtual CPUApi *createCPUApi() = 0;
    ///
    ///  <summary> * 创建主板的对象 </summary>
    ///  * <returns> 主板的对象 </returns>
    ///
    virtual MainboardApi *createMainboardApi() = 0;
};
}
}
}
}
}
