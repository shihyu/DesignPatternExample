#include "ComputerEngineer.h"

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

					void ComputerEngineer::makeComputer(int cpuType, int mainboardType)
					{
						//1：首先准备好装机所需要的配件
						prepareHardwares(cpuType,mainboardType);
						//2：组装机器

						//3：测试机器

						//4：交付客户
					}

					void ComputerEngineer::prepareHardwares(int cpuType, int mainboardType)
					{
						//这里要去准备CPU和主板的具体实现，为了示例简单，这里只准备这两个
						//可是，装机工程师并不知道如何去创建，怎么办呢？

						//直接找相应的工厂获取
						this->cpu = CPUFactory::createCPUApi(cpuType);
						this->mainboard = MainboardFactory::createMainboardApi(mainboardType);

						//测试一下配件是否好用
						this->cpu->calculate();
						this->mainboard->installCPU();
					}
				}
			}
		}
	}
}