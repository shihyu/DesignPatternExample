#pragma once

#include "AuthorizationModel.h"
#include "TestDB.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example1 {
///
/// <summary> * 安全管理，实现成单例 </summary>
///
class SecurityMgr {
private:
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static SecurityMgr *securityMgr = new SecurityMgr();
    SecurityMgr();
public:
    static SecurityMgr *getInstance();

    ///
    ///  <summary> * 在运行期间，用来存放登录人员对应的权限，
    ///  * 在Web应用中，这些数据通常会存放到session中 </summary>
    ///
private:
    Map<std::string, Collection<AuthorizationModel *>*> *map;

    ///
    ///  <summary> * 模拟登录的功能 </summary>
    ///  * <param name="user"> 登录的用户 </param>
    ///
public:
    virtual void login(std::string user);
    ///
    ///  <summary> * 判断某用户对某个安全实体是否拥有某权限 </summary>
    ///  * <param name="user"> 被检测权限的用户  </param>
    ///  * <param name="securityEntity"> 安全实体 </param>
    ///  * <param name="permit"> 权限 </param>
    ///  * <returns> true表示拥有相应权限，false表示没有相应权限 </returns>
    ///
    virtual bool hasPermit(std::string user, std::string securityEntity, std::string permit);
    ///
    ///  <summary> * 从数据库中获取某人所拥有的权限 </summary>
    ///  * <param name="user"> 需要获取所拥有的权限的人员 </param>
    ///  * <returns> 某人所拥有的权限 </returns>
    ///
private:
    Collection<AuthorizationModel *> *queryByUser(std::string user);


private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            map = std::map<std::string, Collection<AuthorizationModel *>*>();

            initialized = true;
        }
    }
};

}
}
}
}
}