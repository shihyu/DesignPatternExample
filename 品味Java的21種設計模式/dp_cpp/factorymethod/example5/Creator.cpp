#include "Creator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example5
				{

					Product *Creator::createProduct()
					{
						//在这里使用工厂方法，得到客户端所需对象的部件对象
						Product1 *p1 = factoryMethod1();
						Product2 *p2 = factoryMethod2();
						//工厂方法创建的对象是创建客户端对象所需要的
						Product *p = new ConcreteProduct();
						p->setProduct1(p1);
						p->setProduct2(p2);

						return p;
					}
				}
			}
		}
	}
}