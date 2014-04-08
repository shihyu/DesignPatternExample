#include "EnterpriseCustomer.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example2 {

std::string EnterpriseCustomer::getLinkman() {
    return linkman;
}

void EnterpriseCustomer::setLinkman(std::string linkman) {
    this->linkman = linkman;
}

std::string EnterpriseCustomer::getLinkTelephone() {
    return linkTelephone;
}

void EnterpriseCustomer::setLinkTelephone(std::string linkTelephone) {
    this->linkTelephone = linkTelephone;
}

std::string EnterpriseCustomer::getRegisterAddress() {
    return registerAddress;
}

void EnterpriseCustomer::setRegisterAddress(std::string registerAddress) {
    this->registerAddress = registerAddress;
}

void EnterpriseCustomer::serviceRequest() {
    //企业客户提出的具体服务请求
    puts(this->getName() + "企业提出服务请求");
}

void EnterpriseCustomer::predilectionAnalyze() {
    //根据过往购买的历史、潜在购买意向
    //以及客户所在行业的发展趋势、客户的发展预期等的分析
    puts("现在对企业客户" + this->getName() + "进行产品偏好分析");
}

void EnterpriseCustomer::worthAnalyze() {
    //根据购买的金额大小、购买的产品和服务的多少、购买的频率等进行分析
    //企业客户的标准会比个人客户的高
    puts("现在对企业客户" + this->getName() + "进行价值分析");
}
}
}
}
}
}
