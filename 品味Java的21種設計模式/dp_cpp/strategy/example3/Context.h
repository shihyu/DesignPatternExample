#pragma once

#include "Strategy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example3
				{

					///
					/// <summary> * 上下文对象，通常会持有一个具体的策略对象 </summary>
					/// 
					class Context
					{
					///	
					///	 <summary> * 持有一个具体的策略对象 </summary>
					///	 
					private:
						Strategy *strategy;
					///	
					///	 <summary> * 构造方法，传入一个具体的策略对象 </summary>
					///	 * <param name="aStrategy"> 具体的策略对象 </param>
					///	 
					public:
						Context(Strategy *aStrategy);
					///	
					///	 <summary> * 上下文对客户端提供的操作接口，可以有参数和返回值 </summary>
					///	 
						virtual void contextInterface();

					};


				}
			}
		}
	}
}