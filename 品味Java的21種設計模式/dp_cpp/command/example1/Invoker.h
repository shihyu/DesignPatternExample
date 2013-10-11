#pragma once

#include "Command.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example1
				{
					///
					/// <summary> * 调用者 </summary>
					/// 
					class Invoker
					{
					///	
					///	 <summary> * 持有命令对象 </summary>
					///	 
					private:
						Command *command;
					///	
					///	 <summary> * 设置调用者持有的命令对象 </summary>
					///	 * <param name="command"> 命令对象 </param>
					///	 
					public:
						virtual void setCommand(Command *command);
					///	
					///	 <summary> * 示意方法，要求命令执行请求 </summary>
					///	 
						virtual void runCommand();
					};

				}
			}
		}
	}
}