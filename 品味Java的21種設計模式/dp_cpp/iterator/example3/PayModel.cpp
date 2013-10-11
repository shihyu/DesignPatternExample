#include "PayModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example3
				{

					std::string PayModel::getUserName()
					{
						return userName;
					}

					void PayModel::setUserName(std::string userName)
					{
						this->userName = userName;
					}

					double PayModel::getPay()
					{
						return pay;
					}

					void PayModel::setPay(double pay)
					{
						this->pay = pay;
					}

					std::string PayModel::ToString()
					{
						return "userName="+userName+",pay="+pay;
					}
				}
			}
		}
	}
}