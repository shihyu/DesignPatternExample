#include "Context.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example2
				{

					void Context::setState(State *state)
					{
						this->state = state;
					}

					void Context::request(std::string sampleParameter)
					{
						//在处理中，会转调state来处理
						state->handle(sampleParameter);
					}
				}
			}
		}
	}
}