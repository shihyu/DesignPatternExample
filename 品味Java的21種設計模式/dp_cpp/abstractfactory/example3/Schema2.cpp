#include "Schema2.h"

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

					CPUApi *Schema2::createCPUApi()
					{
						return new AMDCPU(939);
					}

					MainboardApi *Schema2::createMainboardApi()
					{
						return new MSIMainboard(939);
					}
				}
			}
		}
	}
}
