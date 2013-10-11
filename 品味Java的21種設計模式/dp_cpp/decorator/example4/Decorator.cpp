#include "Decorator.h"

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

					Decorator::Decorator(Component *c)
					{
						this->c = c;
					}

					double Decorator::calcPrize(std::string user, Date *begin, Date *end)
					{
						//转调组件对象的方法
						return c->calcPrize(user, begin, end);
					}
				}
			}
		}
	}
}
