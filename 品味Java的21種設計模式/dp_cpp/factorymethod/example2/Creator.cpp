#include "Creator.h"

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

					void Creator::someOperation()
					{
						//通常在这些方法实现中，需要调用工厂方法来获取Product对象
						Product *product = factoryMethod();
					}
				}
			}
		}
	}
}
