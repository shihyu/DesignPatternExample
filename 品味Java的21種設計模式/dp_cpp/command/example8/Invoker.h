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
				namespace example8
				{

					class Invoker
					{
					///	
					///	 <summary> * 持有命令对象 </summary>
					///	 
					private:
						Command *cmd;
					///	
					///	 <summary> * 设置命令对象 </summary>
					///	 * <param name="cmd"> 命令对象 </param>
					///	 
					public:
						virtual void setCmd(Command *cmd);
					///	
					///	 <summary> * 开始打印 </summary>
					///	 
						virtual void startPrint();
					};
				}
			}
		}
	}
}