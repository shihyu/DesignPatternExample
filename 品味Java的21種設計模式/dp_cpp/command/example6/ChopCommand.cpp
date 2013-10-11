#include "ChopCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example6
				{

					void ChopCommand::setCookApi(CookApi *cookApi)
					{
						this->cookApi = cookApi;
					}

					ChopCommand::ChopCommand(int tableNum)
					{
						this->tableNum = tableNum;
					}

					int ChopCommand::getTableNum()
					{
						return this->tableNum;
					}

					void ChopCommand::execute()
					{
						this->cookApi->cook(tableNum,"绿豆排骨煲");
					}
				}
			}
		}
	}
}
