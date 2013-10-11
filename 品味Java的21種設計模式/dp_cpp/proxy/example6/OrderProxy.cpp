#include "OrderProxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example6
				{

					OrderProxy::OrderProxy(std::string productName, int orderNum, std::string orderUser) : Order(productName,orderNum,orderUser)
					{
					}

					void OrderProxy::setProductName(std::string productName, std::string user)
					{
						//控制访问权限，只有创建订单的人员才能够修改
						if(user!="" && user.equals(this->getOrderUser()))
						{
							Order::setProductName(productName, user);
						}
						else
						{
							puts("对不起"+user+"，您无权修改订单中的产品名称。");
						}
					}

					void OrderProxy::setOrderNum(int orderNum, std::string user)
					{
						//控制访问权限，只有创建订单的人员才能够修改
						if(user!="" && user.equals(this->getOrderUser()))
						{
							Order::setOrderNum(orderNum, user);
						}
						else
						{
							puts("对不起"+user+"，您无权修改订单中的订购数量。");
						}
					}

					void OrderProxy::setOrderUser(std::string orderUser, std::string user)
					{
						//控制访问权限，只有创建订单的人员才能够修改
						if(user!="" && user.equals(this->getOrderUser()))
						{
							Order::setOrderUser(orderUser, user);
						}
						else
						{
							puts("对不起"+user+"，您无权修改订单中的订购人。");
						}
					}

					std::string OrderProxy::ToString()
					{
						return "productName="+this->getProductName()+",orderNum="+this->getOrderNum()+",orderUser="+this->getOrderUser();
					}
				}
			}
		}
	}
}