#include "ConcreteComponent.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example4
				{

					double ConcreteComponent::calcPrize(std::string user, Date *begin, Date *end)
					{
						//只是一个默认的实现，默认没有奖金
						return 0;
					}
				}
			}
		}
	}
}