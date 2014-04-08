#pragma once

#include "PayModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example2 {

///
/// <summary> * 被客户方收购的那个公司的工资管理类 </summary>
///
class SalaryManager {
    ///
    ///  <summary> * 用数组管理 </summary>
    ///
private:
    //ORIGINAL LINE: private PayModel[] pms = nullptr;
    //JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
    PayModel *pms;
    ///
    ///  <summary> * 获取工资列表 </summary>
    ///  * <returns> 工资列表 </returns>
    ///
public:
    virtual PayModel *getPays();
    ///
    ///  <summary> * 计算工资，其实应该有很多参数，为了演示从简 </summary>
    ///
    virtual void calcSalary();
};

}
}
}
}
}