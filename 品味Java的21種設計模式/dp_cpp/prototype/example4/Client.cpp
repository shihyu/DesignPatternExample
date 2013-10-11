#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//先创建原型实例
						OrderApi *oa1 = new PersonalOrder();

						//设置原型实例的订单数量的值
						oa1->setOrderProductNum(100);
						//为了简单，这里仅仅输出数量
						puts("这是第一次获取的对象实例==="+oa1->getOrderProductNum());

						//通过克隆来获取新的实例
						OrderApi *oa2 = static_cast<OrderApi*>(oa1->cloneOrder());
						//修改它的数量
						oa2->setOrderProductNum(80);
						//输出克隆出来的对象的值
						puts("输出克隆出来的实例==="+oa2->getOrderProductNum());

						//再次输出原型实例的值
						puts("再次输出原型实例==="+oa1->getOrderProductNum());
					}
				}
			}
		}
	}
}
