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
				namespace example3
				{

					///
					/// <summary> * 机箱对象，本身有按钮，持有按钮对应的命令对象 </summary>
					/// 
					class Box
					{
					///	
					///	 <summary> * 开机命令对象 </summary>
					///	 
					private:
						Command *openCommand;
					///	
					///	 <summary> * 设置开机命令对象 </summary>
					///	 * <param name="command"> 开机命令对象 </param>
					///	 
					public:
						virtual void setOpenCommand(Command *command);
					///	
					///	 <summary> * 提供给客户使用，接受并相应用户请求，相当于开机按钮被按下触发的方法 </summary>
					///	 
						virtual void openButtonPressed();
					///	
					///	 <summary> * 重启机器命令对象 </summary>
					///	 
					private:
						Command *resetCommand;
					///	
					///	 <summary> * 设置重启机器命令对象 </summary>
					///	 * <param name="command">  </param>
					///	 
					public:
						virtual void setResetCommand(Command *command);
					///	
					///	 <summary> * 提供给客户使用，接受并相应用户请求，相当于重启按钮被按下触发的方法 </summary>
					///	 
						virtual void resetButtonPressed();
					};

				}
			}
		}
	}
}