#include "PersonalOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example1
				{

					int PersonalOrder::getOrderProductNum()
					{
						return this->orderProductNum;
					}

					void PersonalOrder::setOrderProductNum(int num)
					{
						this->orderProductNum = num;
					}

					std::string PersonalOrder::getCustomerName()
					{
						return customerName;
					}

					void PersonalOrder::setCustomerName(std::string customerName)
					{
						this->customerName = customerName;
					}

					std::string PersonalOrder::getProductId()
					{
						return productId;
					}

					void PersonalOrder::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					std::string PersonalOrder::ToString()
					{
						return "本个人订单的订购人是="+this->customerName+"，订购产品是="+this->productId+"，订购数量为="+this->orderProductNum;
					}
				}
			}
		}
	}
}