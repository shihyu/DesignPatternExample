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
					/// <summary> * 具体算法实现，为大客户计算应报的价格 </summary>
					/// 
					class LargeCustomerStrategy : public Strategy
					{
					public:
						virtual double calcPrice(double goodsPrice);
					};

				}
			}
		}
	}
}