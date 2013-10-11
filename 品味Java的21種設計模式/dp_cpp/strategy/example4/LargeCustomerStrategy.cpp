#include "LargeCustomerStrategy.h"

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

					double LargeCustomerStrategy::calcPrice(double goodsPrice)
					{
						puts("对于大客户，统一折扣10%");
						return goodsPrice*(1-0.1);
					}
				}
			}
		}
	}
}
