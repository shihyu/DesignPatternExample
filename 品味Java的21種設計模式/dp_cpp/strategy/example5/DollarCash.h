#pragma once

#include "PaymentStrategy.h"
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
					///
					/// <summary> * 美元现金支付 </summary>
					/// 
					class DollarCash : public PaymentStrategy
					{

					public:
						virtual void pay(PaymentContext *ctx);
					};
				}
			}
		}
	}
}