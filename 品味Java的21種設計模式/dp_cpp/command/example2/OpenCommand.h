#pragma once

#include "Command.h"
#include "MainBoardApi.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example2
				{
					///
					/// <summary> * 开机命令的实现，实现Command接口，
					/// * 持有开机命令的真正实现，通过调用接收者的方法来实现命令 </summary>
					/// 
					class OpenCommand : public Command
					{
					///	
					///	 <summary> * 持有真正实现命令的接收者——主板对象 </summary>
					///	 
					private:
						MainBoardApi *mainBoard;
					///	
					///	 <summary> * 构造方法，传入主板对象 </summary>
					///	 * <param name="mainBoard"> 主板对象 </param>
					///	 
					public:
						OpenCommand(MainBoardApi *mainBoard);

						virtual void execute();
					};

				}
			}
		}
	}
}