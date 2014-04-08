#pragma once

#include "UserModelApi.h"
#include "UserModel.h"
#include "Proxy.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example3 {

///
/// <summary> * 实现示例要求的功能 </summary>
///
class UserManager {
    ///
    ///  <summary> * 根据部门编号来获取该部门下的所有人员 </summary>
    ///  * <param name="depId"> 部门编号 </param>
    ///  * <returns> 该部门下的所有人员 </returns>
    ///
public:
    virtual Collection<UserModelApi *> *getUserByDepId(std::string depId) throw(Exception);
    ///
    ///  <summary> * 获取与数据库的连接 </summary>
    ///  * <returns> 数据库连接 </returns>
    ///
private:
    Connection *getConnection() throw(Exception);
};

}
}
}
}
}