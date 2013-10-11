#pragma once

#include "PaymentContext.h"
#include "PaymentStrategy.h"
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
					/// <summary> * 扩展的支付上下文对象 </summary>
					/// 
					class PaymentContext2 : public PaymentContext
					{
					///	
					///	 <summary> * 银行帐号 </summary>
					///	 
					private:
						std::string account;
					///	
					///	 <summary> * 构造方法，传入被支付工资的人员，应支付的金额和具体的支付策略 </summary>
					///	 * <param name="userName"> 被支付工资的人员 </param>
					///	 * <param name="money"> 应支付的金额 </param>
					///	 * <param name="account"> 支付到的银行帐号 </param>
					///	 * <param name="strategy"> 具体的支付策略 </param>
					///	 
					public:
						PaymentContext2(std::string userName, double money, std::string account, PaymentStrategy *strategy);
						virtual std::string getAccount();
					};

				}
			}
		}
	}
}