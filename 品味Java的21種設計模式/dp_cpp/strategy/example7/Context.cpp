#include "Context.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example7
				{

					Context::Context(Strategy *aStrategy)
					{
						this->strategy = aStrategy;
					}

					void Context::contextInterface()
					{
						//通常会转调具体的策略对象进行算法运算
						strategy->algorithmInterface();
					}
				}
			}
		}
	}
}
