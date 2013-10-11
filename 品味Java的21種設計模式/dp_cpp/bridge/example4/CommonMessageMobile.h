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

					class CommonMessageMobile : public Message
					{

					public:
						virtual void send(std::string message, std::string toUser);

					};

				}
			}
		}
	}
}