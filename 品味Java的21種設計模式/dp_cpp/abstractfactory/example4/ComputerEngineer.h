#pragma once

#include "CPUApi.h"
#include "MainboardApi.h"
#include "MemoryApi.h"
#include "AbstractFactory.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example4 {

///
/// <summary> * 装机工程师的类 </summary>
///
class ComputerEngineer {
    ///
    ///  <summary> * 定义组装机器需要的CPU </summary>
    ///
private:
    CPUApi *cpu;
    ///
    ///  <summary> * 定义组装机器需要的主板 </summary>
    ///
    MainboardApi *mainboard;
    ///
    ///  <summary> * 定义组装机器需要的内存 </summary>
    ///
    MemoryApi *memory;

    ///
    ///  <summary> * 装机过程 </summary>
    ///  * <param name="schema"> 客户选择的装机方案 </param>
    ///
public:
    virtual void makeComputer(AbstractFactory *schema);
    ///
    ///  <summary> * 准备装机所需要的配件 </summary>
    ///  * <param name="schema"> 客户选择的装机方案 </param>
    ///
private:
    void prepareHardwares(AbstractFactory *schema);
};

}
}
}
}
}