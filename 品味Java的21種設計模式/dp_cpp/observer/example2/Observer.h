#pragma once

#include "Subject.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example2
				{
					///
					/// <summary> * 观察者，比如报纸的读者 </summary>
					/// 
					class Observer
					{
					///	
					///	 <summary> * 被通知的方法 </summary>
					///	 * <param name="subject"> 具体的目标对象，可以获取报纸的内容 </param>
					///	 
					public:
						virtual public void update(Subject*) = 0;
					};

				}
			}
		}
	}
}