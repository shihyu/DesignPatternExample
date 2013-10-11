#pragma once

#include "Receiver.h"
#include "Command.h"
#include "ConcreteCommand.h"
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

					class Client
					{
					///	
					///	 <summary> * 示意，负责创建命令对象，并设定它的接受者 </summary>
					///	 
					public:
						virtual void assemble();
					};

				}
			}
		}
	}
}