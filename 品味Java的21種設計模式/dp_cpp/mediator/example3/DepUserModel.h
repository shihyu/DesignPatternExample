#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example3 {
///
/// <summary> * 描述部门和人员关系的类 </summary>
///
class DepUserModel {
    ///
    ///  <summary> * 用于部门和人员关系的编号，用做主键 </summary>
    ///
private:
    std::string depUserId;
    ///
    ///  <summary> * 部门的编号 </summary>
    ///
    std::string depId;
    ///
    ///  <summary> * 人员的编号 </summary>
    ///
    std::string userId;
public:
    virtual std::string getDepUserId();
    virtual void setDepUserId(std::string depUserId);
    virtual std::string getDepId();
    virtual void setDepId(std::string depId);
    virtual std::string getUserId();
    virtual void setUserId(std::string userId);
};

}
}
}
}
}