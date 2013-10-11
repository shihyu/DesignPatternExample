#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example7
				{

					void Client::main(std::string args[])
					{
						//先创建原型实例
						PersonalOrder *oa1 = new PersonalOrder();

						//设置原型实例的值
						Product *product = new Product();
						product->setName("产品1");
						oa1->setProduct(product);
						oa1->setOrderProductNum(100);

						puts("这是第一次获取的对象实例="+oa1);

						//通过克隆来获取新的实例
						PersonalOrder *oa2 = static_cast<PersonalOrder*>(oa1->clone());
						//修改它的值
						oa2->getProduct()->setName("产品2");
						oa2->setOrderProductNum(80);
						//输出克隆出来的对象的值
						puts("输出克隆出来的实例="+oa2);

						//再次输出原型实例的值
						puts("再次输出原型实例="+oa1);
					}
				}
			}
		}
	}
}
