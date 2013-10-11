#include "MessageEmail.h"

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

					void MessageEmail::send(std::string message, std::string toUser)
					{
						puts("使用Email的方式，发送消息'"+message+"'给"+toUser);
					}
				}
			}
		}
	}
}
