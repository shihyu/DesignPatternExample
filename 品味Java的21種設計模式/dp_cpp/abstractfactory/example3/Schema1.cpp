#include "Schema1.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example3
				{

					CPUApi *Schema1::createCPUApi()
					{
						return new IntelCPU(1156);
					}

					MainboardApi *Schema1::createMainboardApi()
					{
						return new GAMainboard(1156);
					}
				}
			}
		}
	}
}