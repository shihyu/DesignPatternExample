#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example1
				{

					void Client::someOperation()
					{
						std::string names[3] = {"张三","李四","王五"};
						//创建聚合对象
						Aggregate *aggregate = new ConcreteAggregate(names);
						//循环输出聚合对象中的值
						Iterator it = aggregate->createIterator();
						//首先设置迭代器到第一个元素
						it->first();
						while(!it->isDone())
						{
							//取出当前的元素来
							object *obj = it->currentItem();
							puts("the obj=="+obj);
							//如果还没有迭代到最后，那么就向下迭代一个
							it->next();
						}
					}

					void Client::main(std::string args[])
					{
						//可以简单的测试一下
						Client *client = new Client();
						client->someOperation();
					}
				}
			}
		}
	}
}
