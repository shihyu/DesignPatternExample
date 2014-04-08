#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example1 {
///
/// <summary> * 描述用户信息的数据模型 </summary>
///
class UserModel {
private:
    std::string uuid, userId, pwd, name;

public:
    virtual std::string getUuid();

    virtual void setUuid(std::string uuid);

    virtual std::string getUserId();

    virtual void setUserId(std::string userId);

    virtual std::string getPwd();

    virtual void setPwd(std::string pwd);

    virtual std::string getName();

    virtual void setName(std::string name);
};

}
}
}
}
}