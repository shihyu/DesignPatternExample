#pragma once

#include "PaymentStrategy.h"
#include "PaymentContext.h"
#include <string>

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
					/// <summary> * 支付到银行卡 </summary>
					/// 
					class Card2 : public PaymentStrategy
					{
					///	
					///	 <summary> * 帐号信息 </summary>
					///	 
					private:
						std::string account;
					///	
					///	 <summary> * 构造方法，传入帐号信息 </summary>
					///	 * <param name="account"> 帐号信息 </param>
					///	 
					public:
						Card2(std::string account);
						virtual void pay(PaymentContext *ctx);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								account = "";

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}