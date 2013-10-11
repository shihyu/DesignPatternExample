#pragma once

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
					/// <summary> * 支付工资的策略的接口，公司有多种支付工资的算法
					/// * 比如：现金、银行卡、现金加股票、现金加期权、美元支付等等 </summary>
					/// 
					class PaymentStrategy
					{
					///	
					///	 <summary> * 公司给某人真正支付工资 </summary>
					///	 * <param name="ctx"> 支付工资的上下文，里面包含算法需要的数据 </param>
					///	 
					public:
						virtual public void pay(PaymentContext*) = 0;
					};

				}
			}
		}
	}
}