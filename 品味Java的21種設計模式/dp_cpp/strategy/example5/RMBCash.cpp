#include "RMBCash.h"

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

					void RMBCash::pay(PaymentContext *ctx)
					{
						puts("现在给"+ctx->getUserName()+"人民币现金支付"+ctx->getMoney()+"元");
					}
				}
			}
		}
	}
}