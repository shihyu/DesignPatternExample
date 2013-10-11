#include "CacheConfModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example5
				{

					bool CacheConfModel::isForever()
					{
						return forever;
					}

					void CacheConfModel::setForever(bool forever)
					{
						this->forever = forever;
					}

					long long CacheConfModel::getBeginTime()
					{
						return beginTime;
					}

					void CacheConfModel::setBeginTime(long long beginTime)
					{
						this->beginTime = beginTime;
					}

					double CacheConfModel::getDurableTime()
					{
						return durableTime;
					}

					void CacheConfModel::setDurableTime(double durableTime)
					{
						this->durableTime = durableTime;
					}
				}
			}
		}
	}
}
