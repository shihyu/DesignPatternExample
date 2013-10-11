#include "UrgencyMessageSMS.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example2
				{

					void UrgencyMessageSMS::send(std::string message, std::string toUser)
					{
						message = "加急："+message;
						puts("使用站内短消息的方式，发送消息'"+message+"'给"+toUser);
					}

					object *UrgencyMessageSMS::watch(std::string messageId)
					{
						//获取相应的数据，组织成监控的数据对象，然后返回		
						return 0;
					}
				}
			}
		}
	}
}
