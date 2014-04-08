#include "PersonalCustomer.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example2 {

std::string PersonalCustomer::getTelephone() {
    return telephone;
}

void PersonalCustomer::setTelephone(std::string telephone) {
    this->telephone = telephone;
}

int PersonalCustomer::getAge() {
    return age;
}

void PersonalCustomer::setAge(int age) {
    this->age = age;
}

void PersonalCustomer::serviceRequest() {
    //个人客户提出的具体服务请求
    puts("客户" + this->getName() + "提出服务请求");
}

void PersonalCustomer::predilectionAnalyze() {
    puts("现在对个人客户" + this->getName() + "进行产品偏好分析");
}

void PersonalCustomer::worthAnalyze() {
    puts("现在对个人客户" + this->getName() + "进行价值分析");
}
}
}
}
}
}
