#pragma once

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
					/// <summary> * 支付工资的上下文，每个人的工资不同，支付方式也不同 </summary>
					/// 
					class PaymentContext
					{
					///	
					///	 <summary> * 应被支付工资的人员，简单点，用姓名来代替 </summary>
					///	 
					private:
						std::string userName;
					///	
					///	 <summary> * 应被支付的工资的金额 </summary>
					///	 
						double money;
					///	
					///	 <summary> * 支付工资的方式策略的接口 </summary>
					///	 
						PaymentStrategy *strategy;
					///	
					///	 <summary> * 构造方法，传入被支付工资的人员，应支付的金额和具体的支付策略 </summary>
					///	 * <param name="userName"> 被支付工资的人员 </param>
					///	 * <param name="money"> 应支付的金额 </param>
					///	 * <param name="strategy"> 具体的支付策略 </param>
					///	 
					public:
						PaymentContext(std::string userName, double money, PaymentStrategy *strategy);

					///	
					///	 <summary> * 立即支付工资 </summary>
					///	 
						virtual void payNow();
						virtual std::string getUserName();

						virtual double getMoney();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								money = 0.0;

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}