#include "AbstractMessage.h"

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

					AbstractMessage::AbstractMessage(int type)
					{
						if(type==1)
						{
							this->impl = new MessageSMS();
						}
						else if(type==2)
						{
							this->impl = new MessageEmail();
						}
						else if(type==3)
						{
							this->impl = new MessageMobile();
						}
					}

					void AbstractMessage::sendMessage(std::string message, std::string toUser)
					{
						this->impl->send(message, toUser);
					}
				}
			}
		}
	}
}