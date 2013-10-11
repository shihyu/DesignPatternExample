#include "ChopCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{

					void ChopCommand::setCookApi(CookApi *cookApi)
					{
						this->cookApi = cookApi;
					}

					void ChopCommand::execute()
					{
						this->cookApi->cook("бл╤╧ее╧гЛр");
					}
				}
			}
		}
	}
}