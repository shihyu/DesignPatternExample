#include "Facade.h"

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

					void Facade::test()
					{
						//在内部实现的时候，可能会调用到内部的多个模块
						AModuleApi *a = new AModuleImpl();
						a->testA();
						BModuleApi *b = new BModuleImpl();
						b->testB();
						CModuleApi *c = new CModuleImpl();
						c->testC();
					}
				}
			}
		}
	}
}