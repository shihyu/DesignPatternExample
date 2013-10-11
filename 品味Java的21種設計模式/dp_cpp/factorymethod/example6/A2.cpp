#include "A2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example6
				{

					C1 *A2::createC1()
					{
						//真正的选择具体实现，并创建对象
						return new C2();
					}
				}
			}
		}
	}
}