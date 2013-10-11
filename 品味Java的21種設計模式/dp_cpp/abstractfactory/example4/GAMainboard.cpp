#include "GAMainboard.h"

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

					GAMainboard::GAMainboard(int cpuHoles)
					{
						this->cpuHoles = cpuHoles;
					}

					void GAMainboard::installCPU()
					{
						puts("now in GAMainboard,cpuHoles="+cpuHoles);
					}
				}
			}
		}
	}
}
