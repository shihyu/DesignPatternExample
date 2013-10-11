#include "InsuranceContract.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example6
				{

					InsuranceContract::InsuranceContract(ConcreteBuilder *builder)
					{
						this->contractId = builder->contractId;
						this->personName = builder->personName;
						this->companyName = builder->companyName;
						this->beginDate = builder->beginDate;
						this->endDate = builder->endDate;
						this->otherData = builder->otherData;
					}

					InsuranceContract::ConcreteBuilder::ConcreteBuilder(std::string contractId, long long beginDate, long long endDate)
					{
						this->contractId = contractId;
						this->beginDate = beginDate;
						this->endDate = endDate;
					}

					ConcreteBuilder *InsuranceContract::ConcreteBuilder::setPersonName(std::string personName)
					{
						this->personName = personName;
						return this;
					}

					ConcreteBuilder *InsuranceContract::ConcreteBuilder::setCompanyName(std::string companyName)
					{
						this->companyName = companyName;
						return this;
					}

					ConcreteBuilder *InsuranceContract::ConcreteBuilder::setOtherData(std::string otherData)
					{
						this->otherData = otherData;
						return this;
					}

					InsuranceContract *InsuranceContract::ConcreteBuilder::build()
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

					void InsuranceContract::someOperation()
					{
						puts("Now in Insurance Contract someOperation=="+this->contractId);
					}
				}
			}
		}
	}
}
