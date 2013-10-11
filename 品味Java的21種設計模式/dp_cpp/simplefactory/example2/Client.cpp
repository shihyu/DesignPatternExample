#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//通过简单工厂来获取接口对象
						Api *api = Factory::createApi(1);
						api->operation("正在使用简单工厂");
					}
				}
			}
		}
	}
}