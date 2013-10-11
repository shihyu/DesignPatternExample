#include "Card2.h"

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

					Card2::Card2(std::string account)
					{
						InitializeInstanceFields();
						this->account = account;
					}

					void Card2::pay(PaymentContext *ctx)
					{
						puts("现在给"+ctx->getUserName()+"的"+this->account+"帐号支付了"+ctx->getMoney()+"元");
						//连接银行，进行转帐，就不去管了
					}
				}
			}
		}
	}
}