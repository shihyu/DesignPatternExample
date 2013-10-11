#include "Waiter.h"

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

					void Waiter::orderDish(Command *cmd)
					{
						//添加到菜单中
						menuCommand->addCommand(cmd);
					}

					void Waiter::orderOver()
					{
						this->menuCommand->execute();
					}
				}
			}
		}
	}
}