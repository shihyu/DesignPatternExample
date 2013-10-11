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
				namespace example4
				{
					///
					/// <summary> * 以Email的方式发送普通消息 </summary>
					/// 
					class CommonMessageEmail : public Message
					{

					public:
						virtual void send(std::string message, std::string toUser);

					};
				}
			}
		}
	}
}