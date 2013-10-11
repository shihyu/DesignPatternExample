#pragma once

#include "Mediator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{

					///
					/// <summary> * 同事类的抽象父类 </summary>
					/// 
					class Colleague
					{
					///	
					///	 <summary> * 持有中介者对象，每一个同事类都知道它的中介者对象 </summary>
					///	 
					private:
						Mediator *mediator;
					///	
					///	 <summary> * 构造方法，传入中介者对象 </summary>
					///	 * <param name="mediator"> 中介者对象 </param>
					///	 
					public:
						Colleague(Mediator *mediator);
					///	
					///	 <summary> * 获取当前同事类对应的中介者对象 </summary>
					///	 * <returns> 对应的中介者对象 </returns>
					///	 
						virtual Mediator *getMediator();
					};


				}
			}
		}
	}
}