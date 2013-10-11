#pragma once

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
				namespace example7
				{
					///
					/// <summary> * 以手机短消息的方式发送消息 </summary>
					/// 
					class MessageMobile : public MessageImplementor
					{

					public:
						virtual void send(std::string message, std::string toUser);
					};

				}
			}
		}
	}
}