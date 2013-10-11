#include "CommonMessageSMS.h"
#include <iostream>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example1
				{

					void CommonMessageSMS::send(std::string message, std::string toUser)
					{
                        std::cout << "使用站内短消息的方式，发送消息'" << message << "'给" << toUser ;
					}
				}
			}
		}
	}
}
