#include "Watcher.h"

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

					void Watcher::update(WaterQualitySubject *subject)
					{
						//这里采用的是拉的方式
						puts(job+"获取到通知，当前污染级别为："+subject->getPolluteLevel());
					}

					std::string Watcher::getJob()
					{
						return this->job;
					}

					void Watcher::setJob(std::string job)
					{
						this->job = job;
					}
				}
			}
		}
	}
}