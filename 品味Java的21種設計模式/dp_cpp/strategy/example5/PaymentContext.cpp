#include "PaymentContext.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example5
				{

					PaymentContext::PaymentContext(std::string userName, double money, PaymentStrategy *strategy)
					{
						InitializeInstanceFields();
						this->userName = userName;
						this->money = money;
						this->strategy = strategy;
					}

					void PaymentContext::payNow()
					{
						//使用客户希望的支付策略来支付工资
						this->strategy->pay(this);
					}

					std::string PaymentContext::getUserName()
					{
						return userName;
					}

					double PaymentContext::getMoney()
					{
						return money;
					}
				}
			}
		}
	}
}