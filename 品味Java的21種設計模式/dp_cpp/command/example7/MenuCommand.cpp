#include "MenuCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example7
				{

					void MenuCommand::addCommand(Command *cmd)
					{
						col->add(cmd);
					}

					void MenuCommand::setCookApi(CookApi *cookApi)
					{
						//什么都不用做
					}

					int MenuCommand::getTableNum()
					{
						//什么都不用做
						return 0;
					}

					Collection<Command*> *MenuCommand::getCommands()
					{
						return this->col;
					}

					void MenuCommand::execute()
					{
						//执行菜单就是把菜单传递给后厨
						CommandQueue::addMenu(this);
					}
				}
			}
		}
	}
}
