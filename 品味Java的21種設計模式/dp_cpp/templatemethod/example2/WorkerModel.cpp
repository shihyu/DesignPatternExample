#include "WorkerModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example2 {

std::string WorkerModel::getUuid() {
    return uuid;
}

void WorkerModel::setUuid(std::string uuid) {
    this->uuid = uuid;
}

std::string WorkerModel::getWorkerId() {
    return workerId;
}

void WorkerModel::setWorkerId(std::string workerId) {
    this->workerId = workerId;
}

std::string WorkerModel::getPwd() {
    return pwd;
}

void WorkerModel::setPwd(std::string pwd) {
    this->pwd = pwd;
}

std::string WorkerModel::getName() {
    return name;
}

void WorkerModel::setName(std::string name) {
    this->name = name;
}
}
}
}
}
}
