#pragma once

#include "FlowAMockMemento.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example3
				{

					///
					/// <summary> * 负责在文件中保存模拟运行流程A的对象的备忘录对象 </summary>
					/// 
					class FlowAMementoFileCareTaker
					{

					///	
					///	 <summary> * 保存备忘录对象 </summary>
					///	 * <param name="memento"> 被保存的备忘录对象 </param>
					///	 
					public:
						virtual void saveMemento(FlowAMockMemento *memento);
					///	
					///	 <summary> * 获取被保存的备忘录对象 </summary>
					///	 * <returns> 被保存的备忘录对象 </returns>
					///	 
						virtual FlowAMockMemento *retriveMemento();
					};

				}
			}
		}
	}
}