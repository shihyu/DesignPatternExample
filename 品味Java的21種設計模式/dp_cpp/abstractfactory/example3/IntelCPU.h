#pragma once

#include "CPUApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example3 {
///
/// <summary> *Intel的CPU实现 </summary>
///
class IntelCPU : public CPUApi {
    ///
    ///  <summary> * CPU的针脚数目 </summary>
    ///
private:
    int pins;
    ///
    ///  <summary> * 构造方法，传入CPU的针脚数目 </summary>
    ///  * <param name="pins"> CPU的针脚数目 </param>
    ///
public:
    IntelCPU(int pins);

    virtual void calculate();
};

}
}
}
}
}