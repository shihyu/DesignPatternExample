#include "AuthorizationModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example1 {

std::string AuthorizationModel::getUser() {
    return user;
}

void AuthorizationModel::setUser(std::string user) {
    this->user = user;
}

std::string AuthorizationModel::getSecurityEntity() {
    return securityEntity;
}

void AuthorizationModel::setSecurityEntity(std::string securityEntity) {
    this->securityEntity = securityEntity;
}

std::string AuthorizationModel::getPermit() {
    return permit;
}

void AuthorizationModel::setPermit(std::string permit) {
    this->permit = permit;
}
}
}
}
}
}
