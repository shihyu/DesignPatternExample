#include "LoginModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example2 {

std::string LoginModel::getWorkerId() {
    return workerId;
}

void LoginModel::setWorkerId(std::string workerId) {
    this->workerId = workerId;
}

std::string LoginModel::getPwd() {
    return pwd;
}

void LoginModel::setPwd(std::string pwd) {
    this->pwd = pwd;
}
}
}
}
}
}
