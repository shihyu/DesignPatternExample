#include "FeeRequestModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					FeeRequestModel::FeeRequestModel() : RequestModel(FEE_TYPE)
					{
					}

					std::string FeeRequestModel::getUser()
					{
						return user;
					}

					void FeeRequestModel::setUser(std::string user)
					{
						this->user = user;
					}

					double FeeRequestModel::getFee()
					{
						return fee;
					}

					void FeeRequestModel::setFee(double fee)
					{
						this->fee = fee;
					}
				}
			}
		}
	}
}