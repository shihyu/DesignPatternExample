#include "SpecialUrgencyMessage.h"

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

					SpecialUrgencyMessage::SpecialUrgencyMessage(MessageImplementor *impl) : AbstractMessage(impl)
					{
					}

					void SpecialUrgencyMessage::hurry(std::string messageId)
					{
						//执行催促的业务，发出催促的信息
					}

					void SpecialUrgencyMessage::sendMessage(std::string message, std::string toUser)
					{
						message = "特急："+message;
						AbstractMessage::sendMessage(message, toUser);
						//还需要增加一条待催促的信息
					}
				}
			}
		}
	}
}
