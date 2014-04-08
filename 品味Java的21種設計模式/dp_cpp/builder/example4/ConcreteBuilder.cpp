#include "ConcreteBuilder.h"

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example4 {

ConcreteBuilder::ConcreteBuilder(std::string contractId, long long beginDate, long long endDate) {
    this->contractId = contractId;
    this->beginDate = beginDate;
    this->endDate = endDate;
}

ConcreteBuilder *ConcreteBuilder::setPersonName(std::string personName) {
    this->personName = personName;
    return this;
}

ConcreteBuilder *ConcreteBuilder::setCompanyName(std::string companyName) {
    this->companyName = companyName;
    return this;
}

ConcreteBuilder *ConcreteBuilder::setOtherData(std::string otherData) {
    this->otherData = otherData;
    return this;
}

InsuranceContract *ConcreteBuilder::build() {
    return new InsuranceContract(this);
}

std::string ConcreteBuilder::getContractId() {
    return contractId;
}

std::string ConcreteBuilder::getPersonName() {
    return personName;
}

std::string ConcreteBuilder::getCompanyName() {
    return companyName;
}

long long ConcreteBuilder::getBeginDate() {
    return beginDate;
}

long long ConcreteBuilder::getEndDate() {
    return endDate;
}

std::string ConcreteBuilder::getOtherData() {
    return otherData;
}
}
}
}
}
}
