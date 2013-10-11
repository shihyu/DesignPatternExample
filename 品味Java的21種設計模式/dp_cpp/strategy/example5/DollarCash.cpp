#include "DollarCash.h"

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

					void DollarCash::pay(PaymentContext *ctx)
					{
						puts("现在给"+ctx->getUserName()+"美元现金支付"+ctx->getMoney()+"元");
					}
				}
			}
		}
	}
}