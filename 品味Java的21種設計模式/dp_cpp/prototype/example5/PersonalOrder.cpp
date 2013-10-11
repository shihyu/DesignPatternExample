#include "PersonalOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example5
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

					object *PersonalOrder::clone()
					{
						//克隆方法的真正实现，直接调用父类的克隆方法就可以了
						object *obj = 0;
						try
						{
							obj = __super::clone();
						}
						catch (CloneNotSupportedException *e)
						{
							e->printStackTrace();
						}
						return obj;
					}
				}
			}
		}
	}
}