#include "GroupPrizeDecorator.h"

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

					GroupPrizeDecorator::GroupPrizeDecorator(Component *c) : Decorator(c)
					{
					}

					double GroupPrizeDecorator::calcPrize(std::string user, Date *begin, Date *end)
					{
						//1：先获取前面运算出来的奖金
						double money = Decorator::calcPrize(user, begin, end);
						//2：然后计算当月团队业务奖金，先计算出团队总的业务额，然后再乘以1%
						//假设都是一个团队的
						double group = 0.0;
						for (Map<std::string, double>::const_iterator d = TempDB::mapMonthSaleMoney->begin(); d != TempDB::mapMonthSaleMoney->end(); ++d)
						{
							group += d->second;
						}
						double prize = group * 0.01;
						puts(user+"当月团队业务奖金"+prize);
						return money + prize;
					}
				}
			}
		}
	}
}
