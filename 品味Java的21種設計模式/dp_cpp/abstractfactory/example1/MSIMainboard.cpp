#include "MSIMainboard.h"

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

					MSIMainboard::MSIMainboard(int cpuHoles)
					{
						this->cpuHoles = cpuHoles;
					}

					void MSIMainboard::installCPU()
					{
						puts("now in MSIMainboard,cpuHoles="+cpuHoles);
					}
				}
			}
		}
	}
}