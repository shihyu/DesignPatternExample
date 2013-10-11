#include "ConcreteCommand.h"

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

					ConcreteCommand::ConcreteCommand(Receiver *receiver)
					{
						this->receiver = receiver;
					}

					void ConcreteCommand::execute()
					{
						//通常会转调接受者对象的相应方法，让接受者来真正执行功能
						receiver->action();
					}
				}
			}
		}
	}
}
