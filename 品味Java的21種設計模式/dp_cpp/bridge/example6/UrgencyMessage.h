#pragma once

#include "AbstractMessage.h"
#include "MessageImplementor.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example6
				{
					///
					/// <summary> * 加急消息 </summary>
					/// 
					class UrgencyMessage : public AbstractMessage
					{
					public:
						UrgencyMessage(MessageImplementor *impl);
						virtual void sendMessage(std::string message, std::string toUser);
					///	
					///	 <summary> * 监控某消息的处理过程 </summary>
					///	 * <param name="messageId"> 被监控的消息的编号 </param>
					///	 * <returns> 包含监控到的数据对象，这里示意一下，所以用了Object </returns>
					///	 
						virtual object *watch(std::string messageId);
					};
				}
			}
		}
	}
}