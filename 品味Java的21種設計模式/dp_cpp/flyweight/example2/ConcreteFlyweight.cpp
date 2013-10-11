#include "ConcreteFlyweight.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example2
				{

					ConcreteFlyweight::ConcreteFlyweight(std::string state)
					{
						this->intrinsicState = state;
					}

					void ConcreteFlyweight::operation(std::string extrinsicState)
					{
						//具体的功能处理，可能会用到享元内部、外部的状态
					}
				}
			}
		}
	}
}