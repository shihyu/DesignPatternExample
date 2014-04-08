#include "DepUserModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace mediator {
namespace example3 {

std::string DepUserModel::getDepUserId() {
    return depUserId;
}

void DepUserModel::setDepUserId(std::string depUserId) {
    this->depUserId = depUserId;
}

std::string DepUserModel::getDepId() {
    return depId;
}

void DepUserModel::setDepId(std::string depId) {
    this->depId = depId;
}

std::string DepUserModel::getUserId() {
    return userId;
}

void DepUserModel::setUserId(std::string userId) {
    this->userId = userId;
}
}
}
}
}
}
