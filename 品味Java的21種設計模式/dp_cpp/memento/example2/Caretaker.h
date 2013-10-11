#pragma once

#include "Memento.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example2
				{
					///
					/// <summary> * 负责保存备忘录的对象 </summary>
					/// 
					class Caretaker
					{
					///	
					///	 <summary> * 记录被保存的备忘录对象 </summary>
					///	 
					private:
						Memento *memento;
					///	
					///	 <summary> * 保存备忘录对象 </summary>
					///	 * <param name="memento"> 被保存的备忘录对象 </param>
					///	 
					public:
						virtual void saveMemento(Memento *memento);
					///	
					///	 <summary> * 获取被保存的备忘录对象 </summary>
					///	 * <returns> 被保存的备忘录对象 </returns>
					///	 
						virtual Memento *retriveMemento();
					};


				}
			}
		}
	}
}