#pragma once

#include "LoginTemplate.h"
#include "LoginModel.h"
#include "NormalLoginModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example4 {

///
/// <summary> * 普通用户登录控制加强版的逻辑处理 </summary>
///
class NormalLogin2 : public LoginTemplate {
public:
    virtual LoginModel *findLoginUser(std::string loginId);
    virtual bool match(LoginModel *lm, LoginModel *dbLm);

};

}
}
}
}
}