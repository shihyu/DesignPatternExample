#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example1 {
///
/// <summary> * 描述登录人员登录时填写的信息的数据模型 </summary>
///
class LoginModel {
private:
    std::string userId, pwd;

public:
    virtual std::string getUserId();

    virtual void setUserId(std::string userId);

    virtual std::string getPwd();

    virtual void setPwd(std::string pwd);

};

}
}
}
}
}