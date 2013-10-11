#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
										//		//不用Facade，需要自己跟多个模块交互
										//		AModuleApi a = new AModuleImpl();
										//		a.testA();
										//		BModuleApi b = new BModuleImpl();
										//		b.testB();
										//		CModuleApi c = new CModuleImpl();
										//		c.testC();
										//		
										//		System.out.println("使用Facade----------------------〉");
						//使用了Facade
						new Facade()->test();
					}
				}
			}
		}
	}
}