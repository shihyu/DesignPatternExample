#include "ComputerEngineer.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example4
				{

					void ComputerEngineer::makeComputer(AbstractFactory *schema)
					{
						//1：首先准备好装机所需要的配件
						prepareHardwares(schema);
						//2：组装机器

						//3：测试机器

						//4：交付客户
					}

					void ComputerEngineer::prepareHardwares(AbstractFactory *schema)
					{
						//这里要去准备CPU和主板的具体实现，为了示例简单，这里只准备这两个
						//可是，装机工程师并不知道如何去创建，怎么办呢？

						//使用抽象工厂来获取相应的接口对象
						this->cpu = static_cast<CPUApi*>(schema->createProduct(1));
						this->mainboard = static_cast<MainboardApi*>(schema->createProduct(2));
						this->memory = static_cast<MemoryApi*>(schema->createProduct(3));

						//测试一下配件是否好用
						this->cpu->calculate();
						this->mainboard->installCPU();
						if(memory!=0)
						{
							this->memory->cacheData();
						}
					}
				}
			}
		}
	}
}
