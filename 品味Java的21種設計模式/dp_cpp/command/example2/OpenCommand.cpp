#include "OpenCommand.h"

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

					OpenCommand::OpenCommand(MainBoardApi *mainBoard)
					{
						this->mainBoard = mainBoard;
					}

					void OpenCommand::execute()
					{
						//对于命令对象，根本不知道如何开机，会转调主板对象
						//让主板去完成开机的功能
						this->mainBoard->open();
					}
				}
			}
		}
	}
}
