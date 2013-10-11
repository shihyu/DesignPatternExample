#pragma once

#include "MainBoardApi.h"

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
					/// <summary> * 技嘉主板类，命令的真正实现者，在Command模式中充当Receiver </summary>
					/// 
					class GigaMainBoard : public MainBoardApi
					{
					///	
					///	 <summary> * 真正的开机命令的实现 </summary>
					///	 
					public:
						virtual void open();
					///	
					///	 <summary> * 真正的重新启动机器命令的实现 </summary>
					///	 
						virtual void reset();
					};
				}
			}
		}
	}
}