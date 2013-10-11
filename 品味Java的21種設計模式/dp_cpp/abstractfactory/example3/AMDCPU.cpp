#include "AMDCPU.h"

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

					AMDCPU::AMDCPU(int pins)
					{
						this->pins = pins;
					}

					void AMDCPU::calculate()
					{
						puts("now in AMD CPU,pins="+pins);
					}
				}
			}
		}
	}
}