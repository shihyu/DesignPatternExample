#include "NormalLogin.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example1 {

bool NormalLogin::login(LoginModel *lm) {
    //1：从数据库获取登录人员的信息， 就是根据用户编号去获取人员的数据
    UserModel *um = this->findUserByUserId(lm->getUserId());

    //2：判断从前台传递过来的登录数据，和数据库中已有的数据是否匹配
    //先判断用户是否存在，如果um为null，说明用户肯定不存在
    //但是不为null，用户不一定存在，因为数据层可能返回new UserModel();
    //因此还需要做进一步的判断
    if (um != 0) {
        //如果用户存在，检查用户编号和密码是否匹配
        if (um->getUserId().equals(lm->getUserId()) && um->getPwd().equals(lm->getPwd())) {
            return true;
        }
    }

    return false;
}

UserModel *NormalLogin::findUserByUserId(std::string userId) {
    // 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
    UserModel *um = new UserModel();
    um->setUserId(userId);
    um->setName("test");
    um->setPwd("test");
    um->setUuid("User0001");
    return um;
}
}
}
}
}
}
