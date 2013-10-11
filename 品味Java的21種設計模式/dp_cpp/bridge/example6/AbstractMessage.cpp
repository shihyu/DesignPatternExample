#include "AbstractMessage.h"

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

					AbstractMessage::AbstractMessage(MessageImplementor *impl)
					{
						this->impl = impl;
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
