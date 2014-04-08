#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example2 {
///
/// <summary> * 工资描述模型对象 </summary>
///
class PayModel {
    ///
    ///  <summary> * 支付工资的人员 </summary>
    ///
private:
    std::string userName;
    ///
    ///  <summary> * 支付的工资数额 </summary>
    ///
    double pay;
public:
    virtual std::string getUserName();
    virtual void setUserName(std::string userName);
    virtual double getPay();
    virtual void setPay(double pay);
    virtual std::string ToString();
};
}
}
}
}
}