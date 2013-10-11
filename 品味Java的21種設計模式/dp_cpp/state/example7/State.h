#pragma once

#include "StateMachine.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example7
				{
					///
					/// <summary> * 公共状态接口 </summary>
					/// 
					class State
					{
					///	
					///	 <summary> * 执行状态对应的功能处理 </summary>
					///	 * <param name="ctx"> 上下文的实例对象 </param>
					///	 
					public:
						virtual public void doWork(StateMachine*) = 0;
					};

				}
			}
		}
	}
}