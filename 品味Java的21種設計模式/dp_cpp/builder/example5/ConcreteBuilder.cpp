#include "ConcreteBuilder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example5
				{

					ConcreteBuilder::ConcreteBuilder(std::string contractId, long long beginDate, long long endDate)
					{
						this->contractId = contractId;
						this->beginDate = beginDate;
						this->endDate = endDate;
					}

					ConcreteBuilder *ConcreteBuilder::setPersonName(std::string personName)
					{
						this->personName = personName;
						return this;
					}

					ConcreteBuilder *ConcreteBuilder::setCompanyName(std::string companyName)
					{
						this->companyName = companyName;
						return this;
					}

					ConcreteBuilder *ConcreteBuilder::setOtherData(std::string otherData)
					{
						this->otherData = otherData;
						return this;
					}

					InsuranceContract *ConcreteBuilder::build()
					{
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(contractId == "" || contractId.trim()->length()==0)
						{
							throw new IllegalArgumentException("合同编号不能为空");
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						bool signPerson = personName!="" && personName.trim()->length()>0;
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						bool signCompany = companyName!="" && companyName.trim()->length()>0;
						if(signPerson && signCompany)
						{
							throw new IllegalArgumentException("一份保险合同不能同时与人和公司签订");
						}
						if(signPerson==false && signCompany==false)
						{
							throw new IllegalArgumentException("一份保险合同不能没有签订对象");
						}
						if(beginDate<=0)
						{
							throw new IllegalArgumentException("合同必须有保险开始生效的日期");
						}
						if(endDate<=0)
						{
							throw new IllegalArgumentException("合同必须有保险失效的日期");
						}
						if(endDate<=beginDate)
						{
							throw new IllegalArgumentException("保险失效的日期必须大于保险生效日期");
						}



						return new InsuranceContract(this);
					}

					std::string ConcreteBuilder::getContractId()
					{
						return contractId;
					}

					std::string ConcreteBuilder::getPersonName()
					{
						return personName;
					}

					std::string ConcreteBuilder::getCompanyName()
					{
						return companyName;
					}

					long long ConcreteBuilder::getBeginDate()
					{
						return beginDate;
					}

					long long ConcreteBuilder::getEndDate()
					{
						return endDate;
					}

					std::string ConcreteBuilder::getOtherData()
					{
						return otherData;
					}
				}
			}
		}
	}
}