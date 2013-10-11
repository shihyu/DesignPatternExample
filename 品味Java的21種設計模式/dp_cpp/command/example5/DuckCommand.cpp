#include "DuckCommand.h"

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

					void DuckCommand::setCookApi(CookApi *cookApi)
					{
						this->cookApi = cookApi;
					}

					void DuckCommand::execute()
					{
						this->cookApi->cook("北京烤鸭");
					}
				}
			}
		}
	}
}
