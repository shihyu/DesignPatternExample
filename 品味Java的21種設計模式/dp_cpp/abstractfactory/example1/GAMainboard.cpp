#include "GAMainboard.h"
#include <iostream>

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

					GAMainboard::GAMainboard(int cpuHoles)
					{
						this->cpuHoles = cpuHoles;
					}

					void GAMainboard::installCPU()
					{
                        std::cout << "now in GAMainboard,cpuHoles=" << cpuHoles;
					}
				}
			}
		}
	}
}
