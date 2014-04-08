#pragma once

#include "LoginModel.h"
#include "UserModel.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example1 {

///
/// <summary> * 普通用户登录控制的逻辑处理 </summary>
///
class NormalLogin {
    ///
    ///  <summary> * 判断登录数据是否正确，也就是是否能登录成功 </summary>
    ///  * <param name="lm"> 封装登录数据的Model </param>
    ///  * <returns> true表示登录成功，false表示登录失败 </returns>
    ///
public:
    virtual bool login(LoginModel *lm);
    ///
    ///  <summary> * 根据用户编号获取用户的详细信息 </summary>
    ///  * <param name="userId"> 用户编号 </param>
    ///  * <returns> 对应的用户的详细信息 </returns>
    ///
private:
    UserModel *findUserByUserId(std::string userId);
};

}
}
}
}
}