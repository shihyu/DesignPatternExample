#pragma once

#include "Visitor.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example4 {

///
/// <summary> * 各种客户的父类 </summary>
///
class Customer {
    ///
    ///  <summary> * 客户编号 </summary>
    ///
private:
    std::string customerId;
    ///
    ///  <summary> * 客户名称 </summary>
    ///
    std::string name;

public:
    virtual std::string getCustomerId();
    virtual void setCustomerId(std::string customerId);
    virtual std::string getName();
    virtual void setName(std::string name);

    ///
    ///  <summary> * 接受访问者的访问 </summary>
    ///  * <param name="visitor"> 访问者对象 </param>
    ///
    virtual void accept(Visitor *visitor) = 0;
};

}
}
}
}
}