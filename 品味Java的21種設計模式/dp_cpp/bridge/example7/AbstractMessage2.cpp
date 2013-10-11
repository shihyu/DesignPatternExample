#include "AbstractMessage2.h"

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

					MessageImplementor *AbstractMessage2::getImpl(std::string message)
					{
						MessageImplementor *impl = 0;
						if(message == "")
						{
							//如果没有消息，默认使用站内短消息
							impl = new MessageSMS();
						}
						else if(message.length()< 100)
						{
							//如果消息长度在100以内，使用手机短消息
							impl = new MessageMobile();
						}
						else if(message.length()<1000)
						{
							//如果消息长度在100-1000以内，使用站内短消息
							impl = new MessageSMS();
						}
						else
						{
							//如果消息长度在1000以上
							impl = new MessageEmail();
						}
						return impl;
					}

					AbstractMessage2::AbstractMessage2()
					{
						//现在什么都不做了
					}

					void AbstractMessage2::sendMessage(std::string message, std::string toUser)
					{
						this->getImpl(message)->send(message, toUser);
					}
				}
			}
		}
	}
}