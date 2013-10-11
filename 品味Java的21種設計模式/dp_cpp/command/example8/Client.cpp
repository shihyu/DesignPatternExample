#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example8
				{

					void Client::main(std::string args[])
					{
						//准备要发出的命令
						Command *cmd = new PrintService("退化的命令模式示例");
						//设置命令给持有者
						Invoker *invoker = new Invoker();
						invoker->setCmd(cmd);

						//按下按钮，真正启动执行命令
						invoker->startPrint();
					}
				}
			}
		}
	}
}