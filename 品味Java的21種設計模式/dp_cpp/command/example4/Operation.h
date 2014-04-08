#pragma once

#include "OperationApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {
///
/// <summary> * 运算类，真正实现加减法运算 </summary>
///
class Operation : public OperationApi {
    ///
    ///  <summary> * 记录运算的结果 </summary>
    ///
private:
    int result;
public:
    virtual int getResult();
    virtual void setResult(int result);

    virtual void add(int num);
    virtual void substract(int num);
};

}
}
}
}
}