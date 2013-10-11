#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						//创建装机工程师对象
						ComputerEngineer *engineer = new ComputerEngineer();
						//告诉装机工程师自己选择的配件，让装机工程师组装电脑
						engineer->makeComputer(1,2);
					}
				}
			}
		}
	}
}