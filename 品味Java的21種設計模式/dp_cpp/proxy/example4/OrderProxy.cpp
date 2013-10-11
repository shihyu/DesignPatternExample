#include "OrderProxy.h"

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

					OrderProxy::OrderProxy(Order *realSubject)
					{
						this->order = realSubject;
					}

					void OrderProxy::setProductName(std::string productName, std::string user)
					{
						//控制访问权限，只有创建订单的人员才能够修改
						if(user!="" && user.equals(this->getOrderUser()))
						{
							order->setProductName(productName, user);
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
							order->setOrderNum(orderNum, user);
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
							order->setOrderUser(orderUser, user);
						}
						else
						{
							puts("对不起"+user+"，您无权修改订单中的订购人。");
						}
					}

					int OrderProxy::getOrderNum()
					{
						return this->order->getOrderNum();
					}

					std::string OrderProxy::getOrderUser()
					{
						return this->order->getOrderUser();
					}

					std::string OrderProxy::getProductName()
					{
						return this->order->getProductName();
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
