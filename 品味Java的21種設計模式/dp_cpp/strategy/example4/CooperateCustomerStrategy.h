#pragma once

#include "Strategy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example4
				{
					///
					/// <summary> * 具体算法实现，为战略合作客户客户计算应报的价格 </summary>
					/// 
					class CooperateCustomerStrategy : public Strategy
					{
					public:
						virtual double calcPrice(double goodsPrice);
					};

				}
			}
		}
	}
}