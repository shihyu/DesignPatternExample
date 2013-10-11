#pragma once

#include "Decorator.h"
#include "Component.h"
#include "TempDB.h"
#include <string>

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

					///
					/// <summary> * 装饰器对象，计算当月业务奖金 </summary>
					/// 
					class MonthPrizeDecorator : public Decorator
					{
					public:
						MonthPrizeDecorator(Component *c);

						virtual double calcPrize(std::string user, Date *begin, Date *end);

					};

				}
			}
		}
	}
}