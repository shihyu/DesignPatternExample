#pragma once

#include "ConcreteBuilder.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example5 {
///
/// <summary> * 保险合同的对象 </summary>
///
class InsuranceContract {
    ///
    ///  <summary> * 保险合同编号 </summary>
    ///
private:
    std::string contractId;
    ///
    ///  <summary> * 被保险人员的名称，同一份保险合同，要么跟人员签订，要么跟公司签订，
    ///  * 也就是说，"被保险人员"和"被保险公司"这两个属性，不可能同时有值 </summary>
    ///
    std::string personName;
    ///
    ///  <summary> * 被保险公司的名称 </summary>
    ///
    std::string companyName;
    ///
    ///  <summary> * 保险开始生效的日期 </summary>
    ///
    long long beginDate;
    ///
    ///  <summary> * 保险失效的日期，一定会大于保险开始生效的日期 </summary>
    ///
    long long endDate;
    ///
    ///  <summary> * 示例：其它数据 </summary>
    ///
    std::string otherData;

    ///
    ///  <summary> * 构造方法，访问级别是同包能访问 </summary>
    ///
public:
    InsuranceContract(ConcreteBuilder *builder);

    ///
    ///  <summary> * 示意：保险合同的某些操作 </summary>
    ///
    virtual void someOperation();
};

}
}
}
}
}