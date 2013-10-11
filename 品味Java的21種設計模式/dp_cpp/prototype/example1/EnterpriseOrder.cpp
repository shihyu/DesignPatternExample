#include "EnterpriseOrder.h"

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

					int EnterpriseOrder::getOrderProductNum()
					{
						return this->orderProductNum;
					}

					void EnterpriseOrder::setOrderProductNum(int num)
					{
						this->orderProductNum = num;
					}

					std::string EnterpriseOrder::getEnterpriseName()
					{
						return enterpriseName;
					}

					void EnterpriseOrder::setEnterpriseName(std::string enterpriseName)
					{
						this->enterpriseName = enterpriseName;
					}

					std::string EnterpriseOrder::getProductId()
					{
						return productId;
					}

					void EnterpriseOrder::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					std::string EnterpriseOrder::ToString()
					{
						return "本企业订单的订购企业是="+this->enterpriseName+"，订购产品是="+this->productId+"，订购数量为="+this->orderProductNum;
					}
				}
			}
		}
	}
}