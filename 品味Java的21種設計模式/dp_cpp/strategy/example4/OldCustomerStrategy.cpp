#include "OldCustomerStrategy.h"

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

					double OldCustomerStrategy::calcPrice(double goodsPrice)
					{
						puts("对于老客户，统一折扣5%");
						return goodsPrice*(1-0.05);
					}
				}
			}
		}
	}
}
