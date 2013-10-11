#include "Box.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example2
				{

					void Box::setOpenCommand(Command *command)
					{
						this->openCommand = command;
					}

					void Box::openButtonPressed()
					{
						//按下按钮，执行命令
						openCommand->execute();
					}
				}
			}
		}
	}
}