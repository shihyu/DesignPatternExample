#include "Invoker.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example1
				{

					void Invoker::setCommand(Command *command)
					{
						this->command = command;
					}

					void Invoker::runCommand()
					{
						//调用命令对象的执行方法
						command->execute();
					}
				}
			}
		}
	}
}
