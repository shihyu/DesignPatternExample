#pragma once

#include "WaterQualitySubject.h"

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
					///
					/// <summary> * 水质观察者接口定义 </summary>
					/// 
					class WatcherObserver
					{
					///	
					///	 <summary> * 被通知的方法 </summary>
					///	 * <param name="subject"> 传入被观察的目标对象 </param>
					///	 
					public:
						virtual public void update(WaterQualitySubject*) = 0;
					///	
					///	 <summary> * 设置观察人员的职务 </summary>
					///	 * <param name="job"> 观察人员的职务 </param>
					///	 
						virtual public void setJob(std::string) = 0;
					///	
					///	 <summary> * 获取观察人员的职务 </summary>
					///	 * <returns> 观察人员的职务 </returns>
					///	 
						virtual public std::string getJob() = 0;
					};
				}
			}
		}
	}
}