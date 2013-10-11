#pragma once

#include "Message.h"
#include <string>

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
					/// <summary> * 以站内短消息的方式发送普通消息 </summary>
					/// 
					class CommonMessageSMS : public Message
					{

					public:
						virtual void send(std::string message, std::string toUser);
					};

				}
			}
		}
	}
}