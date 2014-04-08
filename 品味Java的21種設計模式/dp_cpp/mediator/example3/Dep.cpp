#include "Dep.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example3 {

std::string Dep::getDepId() {
    return depId;
}

void Dep::setDepId(std::string depId) {
    this->depId = depId;
}

std::string Dep::getDepName() {
    return depName;
}

void Dep::setDepName(std::string depName) {
    this->depName = depName;
}

bool Dep::deleteDep() {
    //1：要先通过中介者去清除掉所有与这个部门相关的部门和人员的关系
    DepUserMediatorImpl *mediator = DepUserMediatorImpl::getInstance();
    mediator->deleteDep(depId);
    //2：然后才能真的清除掉这个部门
    //请注意在实际开发中，这些业务功能可能会做到业务层去，
    //而且实际开发中对于已经使用的业务数据通常是不会被删除的，
    //而是会被做为历史数据保留
    return true;
}
}
}
}
}
}
