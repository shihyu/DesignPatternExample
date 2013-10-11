#include "Prize.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example1
				{

					double Prize::calcPrize(std::string user, Date *begin, Date *end)
					{
						double prize = 0.0;

						//计算当月业务奖金，所有人都会计算
						prize = this->monthPrize(user, begin, end);
						//计算累计奖金
						prize += this->sumPrize(user, begin, end);

						//需要判断该人员是普通人员还是业务经理，团队奖金只有业务经理才有
						if(this->isManager(user))
						{
							prize += this->groupPrize(user, begin, end);
						}

						return prize;
					}

					double Prize::monthPrize(std::string user, Date *begin, Date *end)
					{
						//计算当月业务奖金,按照人员去获取当月的业务额，然后再乘以3%
						double prize = TempDB::mapMonthSaleMoney->get(user) * 0.03;
						puts(user+"当月业务奖金"+prize);
						return prize;
					}

					double Prize::sumPrize(std::string user, Date *begin, Date *end)
					{
						//计算累计奖金,其实这里应该按照人员去获取累计的业务额，然后再乘以0.1%
						//简单演示一下，假定大家的累计业务额都是1000000元
						double prize = 1000000 * 0.001;
						puts(user+"累计奖金"+prize);
						return prize;
					}

					bool Prize::isManager(std::string user)
					{
						//应该从数据库中获取人员对应的职务
						//为了演示，简单点判断，只有王五是经理
						if((new std::string("王五"))->equals(user))
						{
							return true;
						}
						return false;
					}

					double Prize::groupPrize(std::string user, Date *begin, Date *end)
					{
						//计算当月团队业务奖金，先计算出团队总的业务额，然后再乘以1%，假设都是一个团队的
						double group = 0.0;
						for (Map<std::string, double>::const_iterator d = TempDB::mapMonthSaleMoney->begin(); d != TempDB::mapMonthSaleMoney->end(); ++d)
						{
							group += d->second;
						}
						double prize = group * 0.01;
						puts(user+"当月团队业务奖金"+prize);
						return prize;
					}
				}
			}
		}
	}
}