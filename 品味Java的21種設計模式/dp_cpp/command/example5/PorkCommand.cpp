#include "PorkCommand.h"

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

					void PorkCommand::setCookApi(CookApi *cookApi)
					{
						this->cookApi = cookApi;
					}

					void PorkCommand::execute()
					{
						this->cookApi->cook("ЛвДа°ЧИв");
					}
				}
			}
		}
	}
}