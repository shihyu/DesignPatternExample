#include "ConcreteFactory2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example2
				{

					AbstractProductA *ConcreteFactory2::createProductA()
					{
						return new ProductA2();
					}

					AbstractProductB *ConcreteFactory2::createProductB()
					{
						return new ProductB2();
					}
				}
			}
		}
	}
}