#include "InsuranceContract.h"

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

					InsuranceContract::InsuranceContract(ConcreteBuilder *builder)
					{
						this->contractId = builder->getContractId();
						this->personName = builder->getPersonName();
						this->companyName = builder->getCompanyName();
						this->beginDate = builder->getBeginDate();
						this->endDate = builder->getEndDate();
						this->otherData = builder->getOtherData();
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