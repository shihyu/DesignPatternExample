#include "Invoker.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example9
				{

					void Invoker::startPrint(Command *cmd)
					{
						puts("在Invoker中，输出服务前");
						cmd->execute();
						puts("输出服务结束");
					}
				}
			}
		}
	}
}