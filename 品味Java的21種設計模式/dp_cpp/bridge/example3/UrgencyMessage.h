#pragma once

#include "Message.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example3
				{
					///
					/// <summary> * 加急消息的抽象接口 </summary>
					/// 
					class UrgencyMessage : public Message
					{
					///	
					///	 <summary> * 监控某消息的处理过程 </summary>
					///	 * <param name="messageId"> 被监控的消息的编号 </param>
					///	 * <returns> 包含监控到的数据对象，这里示意一下，所以用了Object </returns>
					///	 
					public:
						virtual public object *watch(std::string) = 0;
					};

				}
			}
		}
	}
}