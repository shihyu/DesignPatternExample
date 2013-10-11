#pragma once

#include "AbstractMessage.h"
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
				namespace example6
				{
					///
					/// <summary> * ∆’Õ®œ˚œ¢ </summary>
					/// 
					class CommonMessage : public AbstractMessage
					{
					public:
						CommonMessage(MessageImplementor *impl);

						virtual void sendMessage(std::string message, std::string toUser);
					};

				}
			}
		}
	}
}