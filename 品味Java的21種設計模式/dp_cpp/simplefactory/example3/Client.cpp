#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						//重要改变，没有new Impl()了，取而代之Factory.createApi()
						Api *api = Factory::createApi();
						api->test1("哈哈，不要紧张，只是个测试而已！");
					}
				}
			}
		}
	}
}