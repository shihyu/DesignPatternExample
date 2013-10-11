#include "SoundCard.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{

					SoundCard::SoundCard(Mediator *mediator) : Colleague(mediator)
					{
					}

					void SoundCard::soundData(std::string data)
					{
						puts("画外音："+data);
					}
				}
			}
		}
	}
}
