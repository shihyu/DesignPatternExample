#pragma once

#include "WaterQualitySubject.h"
#include "WatcherObserver.h"
#include <string>
#include <vector>

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
					/// <summary> * 具体的水质监测对象 </summary>
					/// 
					class WaterQuality : public WaterQualitySubject
					{
					///	
					///	 <summary> * 污染的级别，0表示正常，1表示轻度污染，2表示中度污染，3表示高度污染 </summary>
					///	 
					private:
						int polluteLevel;
					///	
					///	 <summary> * 获取水质污染的级别 </summary>
					///	 * <returns> 水质污染的级别 </returns>
					///	 
					public:
						virtual int getPolluteLevel();
					///	
					///	 <summary> * 当监测水质情况后，设置水质污染的级别 </summary>
					///	 * <param name="polluteLevel"> 水质污染的级别 </param>
					///	 
						virtual void setPolluteLevel(int polluteLevel);
					///	
					///	 <summary> * 通知相应的观察者对象 </summary>
					///	 
						virtual void notifyWatchers();
					};
				}
			}
		}
	}
}