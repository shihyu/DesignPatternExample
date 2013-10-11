#pragma once

#include "CookApi.h"
#include "Command.h"
#include "CommandQueue.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example6
				{

					///
					/// <summary> * 厨师对象，做热菜的厨师 </summary>
					/// 
					class HotCook : public CookApi, Runnable
					{
					///	
					///	 <summary> * 厨师姓名 </summary>
					///	 
					private:
						std::string name;
					///	
					///	 <summary> * 构造方法，传入厨师姓名 </summary>
					///	 * <param name="name"> 厨师姓名 </param>
					///	 
					public:
						HotCook(std::string name);

						virtual void cook(int tableNum, std::string name);

						virtual void run();
					};
				}
			}
		}
	}
}