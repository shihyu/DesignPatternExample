#include "Colleague.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example1
				{

					Colleague::Colleague(Mediator *mediator)
					{
						this->mediator = mediator;
					}

					Mediator *Colleague::getMediator()
					{
						return mediator;
					}
				}
			}
		}
	}
}
