#include "UrgencyMessage.h"

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

					UrgencyMessage::UrgencyMessage(MessageImplementor *impl) : AbstractMessage(impl)
					{
					}

					void UrgencyMessage::sendMessage(std::string message, std::string toUser)
					{
						message = "加急："+message;
						AbstractMessage::sendMessage(message, toUser);
					}

					object *UrgencyMessage::watch(std::string messageId)
					{
						//获取相应的数据，组织成监控的数据对象，然后返回		
						return 0;
					}
				}
			}
		}
	}
}
