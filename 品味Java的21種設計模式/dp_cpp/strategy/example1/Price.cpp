#include "Price.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example1
				{

					double Price::quote(double goodsPrice, std::string customerType)
					{
						if((new std::string("普通客户"))->equals(customerType))
						{
							puts("对于新客户或者是普通客户，没有折扣");
							return goodsPrice;
						}
						else if((new std::string("老客户"))->equals(customerType))
						{
							puts("对于老客户，统一折扣5%");
							return goodsPrice*(1-0.05);
						}
						else if((new std::string("大客户"))->equals(customerType))
						{
							puts("对于大客户，统一折扣10%");
							return goodsPrice*(1-0.1);
						}
						//其余人员都是报原价
						return goodsPrice;
					}
				}
			}
		}
	}
}