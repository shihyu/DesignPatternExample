#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//创建抽象工厂对象
						AbstractFactory *af = new ConcreteFactory1();
						//通过抽象工厂来获取一系列的对象，如产品A和产品B
						af->createProductA();
						af->createProductB();
					}
				}
			}
		}
	}
}