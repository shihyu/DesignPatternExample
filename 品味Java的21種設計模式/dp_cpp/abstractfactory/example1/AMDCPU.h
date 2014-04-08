#pragma once

#include "CPUApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example1 {
///
/// <summary> * AMD的CPU实现 </summary>
///
class AMDCPU : public CPUApi {
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
    AMDCPU(int pins);
    virtual void calculate();
};

}
}
}
}
}