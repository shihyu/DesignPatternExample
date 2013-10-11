#include "WaterQuality.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example5
				{

					int WaterQuality::getPolluteLevel()
					{
						return polluteLevel;
					}

					void WaterQuality::setPolluteLevel(int polluteLevel)
					{
						this->polluteLevel = polluteLevel;
						//通知相应的观察者
						this->notifyWatchers();
					}

					void WaterQuality::notifyWatchers()
					{
						//循环所有注册的观察者
						for (std::vector<WatcherObserver*>::const_iterator watcher = observers.begin(); watcher != observers.end(); ++watcher)
						{
										//开始根据污染级别判断是否需要通知，由这里总控
										if(this->polluteLevel >= 0)
										{
											//通知监测员做记录
											if((new std::string("监测人员"))->equals((*watcher)->getJob()))
											{
												(*watcher)->update(this);
											}
										}
										if(this->polluteLevel >= 1)
										{
											//通知预警人员
											if((new std::string("预警人员"))->equals((*watcher)->getJob()))
											{
												(*watcher)->update(this);
											}
										}
										if(this->polluteLevel >= 2)
										{
											//通知监测部门领导
											if((new std::string("监测部门领导"))->equals((*watcher)->getJob()))
											{
												(*watcher)->update(this);
											}
										}
						}
					}
				}
			}
		}
	}
}