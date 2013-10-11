#include "Client.h"

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

					void Client::assemble()
					{
						//创建接受者
						Receiver *receiver = new Receiver();
						//创建命令对象，设定它的接收者
						Command *command = new ConcreteCommand(receiver);
						//创建Invoker，把命令对象设置进去
						Invoker *invoker = new Invoker();
						invoker->setCommand(command);
					}
				}
			}
		}
	}
}
