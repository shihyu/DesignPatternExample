#include "Order.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example4
				{

					Order::Order(std::string productName, int orderNum, std::string orderUser)
					{
						this->productName = productName;
						this->orderNum = orderNum;
						this->orderUser = orderUser;
					}

					std::string Order::getProductName()
					{
						return productName;
					}

					void Order::setProductName(std::string productName, std::string user)
					{
						this->productName = productName;
					}

					int Order::getOrderNum()
					{
						return orderNum;
					}

					void Order::setOrderNum(int orderNum, std::string user)
					{
						this->orderNum = orderNum;
					}

					std::string Order::getOrderUser()
					{
						return orderUser;
					}

					void Order::setOrderUser(std::string orderUser, std::string user)
					{
						this->orderUser = orderUser;
					}
				}
			}
		}
	}
}