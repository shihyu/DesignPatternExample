#include "PreFeeRequestModel.h"

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

					PreFeeRequestModel::PreFeeRequestModel() : RequestModel(FEE_TYPE)
					{
					}

					std::string PreFeeRequestModel::getUser()
					{
						return user;
					}

					void PreFeeRequestModel::setUser(std::string user)
					{
						this->user = user;
					}

					double PreFeeRequestModel::getFee()
					{
						return fee;
					}

					void PreFeeRequestModel::setFee(double fee)
					{
						this->fee = fee;
					}
				}
			}
		}
	}
}