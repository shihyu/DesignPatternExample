#include "LeaveRequestModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example7 {

std::string LeaveRequestModel::getResult() {
    return result;
}

void LeaveRequestModel::setResult(std::string result) {
    this->result = result;
}

std::string LeaveRequestModel::getUser() {
    return user;
}

std::string LeaveRequestModel::getBeginDate() {
    return beginDate;
}

int LeaveRequestModel::getLeaveDays() {
    return leaveDays;
}

void LeaveRequestModel::setUser(std::string user) {
    this->user = user;
}

void LeaveRequestModel::setBeginDate(std::string beginDate) {
    this->beginDate = beginDate;
}

void LeaveRequestModel::setLeaveDays(int leaveDays) {
    this->leaveDays = leaveDays;
}
}
}
}
}
}
