#include "OrderBusiness.h"

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

					void OrderBusiness::saveOrder(OrderApi *order)
					{
						//根据业务要求，当订单的预定的产品数量超过1000的时候，就需要把订单拆成两份订单
						//当然如果要做好，这里的1000应该做成常量，这么做是为了演示简单

						//1：判断当前的预定产品数量是否大于1000
						while(order->getOrderProductNum() > 1000)
						{
							//2：如果大于，还需要继续拆分
							//2.1再新建一份订单，跟传入的订单除了数量不一样外，其他都相同
							OrderApi *newOrder = 0;
							if(dynamic_cast<PersonalOrder*>(order) != 0)
							{
								//创建相应的新的订单对象
								PersonalOrder *p2 = new PersonalOrder();
								//然后进行赋值，但是产品数量为1000
								PersonalOrder *p1 = static_cast<PersonalOrder*>(order);
								p2->setCustomerName(p1->getCustomerName());
								p2->setProductId(p1->getProductId());
								p2->setOrderProductNum(1000);
								//然后再设置给newOrder
								newOrder = p2;
							}
							else if(dynamic_cast<EnterpriseOrder*>(order) != 0)
							{
								//创建相应的订单对象
								EnterpriseOrder *e2 = new EnterpriseOrder();
								//然后进行赋值，但是产品数量为1000
								EnterpriseOrder *e1 = static_cast<EnterpriseOrder*>(order);
								e2->setEnterpriseName(e1->getEnterpriseName());
								e2->setProductId(e1->getProductId());
								e2->setOrderProductNum(1000);
								//然后再设置给newOrder
								newOrder = e2;
							}

							//2.2原来的订单保留，把数量设置成减少1000
							order->setOrderProductNum(order->getOrderProductNum()-1000);

							//然后是业务功能处理，省略了，打印输出，看一下
							puts("拆分生成订单=="+newOrder);
						}

						//3：不超过，那就直接业务功能处理，省略了，打印输出，看一下
						puts("订单=="+order);

					}
				}
			}
		}
	}
}
