#pragma once

#include "DepUserMediatorImpl.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example3 {

///
/// <summary> * 部门类 </summary>
///
class Dep {
    ///
    ///  <summary> * 描述部门编号 </summary>
    ///
private:
    std::string depId;
    ///
    ///  <summary> * 描述部门名称 </summary>
    ///
    std::string depName;
public:
    virtual std::string getDepId();
    virtual void setDepId(std::string depId);
    virtual std::string getDepName();
    virtual void setDepName(std::string depName);
    ///
    ///  <summary> * 撤销部门 </summary>
    ///  * <returns> 是否撤销成功 </returns>
    ///
    virtual bool deleteDep();
};

}
}
}
}
}