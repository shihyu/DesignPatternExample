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
				namespace example1
				{

					///
					/// <summary> * 观察者接口，定义一个更新的接口给那些在目标发生改变的时候被通知的对象 </summary>
					/// 
					class Observer
					{
					///	
					///	 <summary> * 更新的接口 </summary>
					///	 * <param name="subject"> 传入目标对象，好获取相应的目标对象的状态 </param>
					///	 
					public:
						virtual public void update(Subject*) = 0;

					};


				}
			}
		}
	}
}