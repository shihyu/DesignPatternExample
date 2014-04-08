#include "UserModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example3 {

std::string UserModel::getUserId() {
    return userId;
}

void UserModel::setUserId(std::string userId) {
    this->userId = userId;
}

std::string UserModel::getName() {
    return name;
}

void UserModel::setName(std::string name) {
    this->name = name;
}

std::string UserModel::getDepId() {
    return depId;
}

void UserModel::setDepId(std::string depId) {
    this->depId = depId;
}

std::string UserModel::getSex() {
    return sex;
}

void UserModel::setSex(std::string sex) {
    this->sex = sex;
}

std::string UserModel::ToString() {
    return "userId=" + userId + ",name=" + name + ",depId=" + depId + ",sex=" + sex + "\n";
}
}
}
}
}
}
