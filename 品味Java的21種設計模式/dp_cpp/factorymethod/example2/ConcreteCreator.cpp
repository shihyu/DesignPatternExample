#include "ConcreteCreator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example2
				{

					Product *ConcreteCreator::factoryMethod()
					{
						//重定义工厂方法，返回一个具体的Product对象
						return new ConcreteProduct();
					}
				}
			}
		}
	}
}