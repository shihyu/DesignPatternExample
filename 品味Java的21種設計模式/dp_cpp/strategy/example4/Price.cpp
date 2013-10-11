#include "Price.h"

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

					Price::Price(Strategy *aStrategy)
					{
						this->strategy = aStrategy;
					}

					double Price::quote(double goodsPrice)
					{
						return this->strategy->calcPrice(goodsPrice);
					}
				}
			}
		}
	}
}
