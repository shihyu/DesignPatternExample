#include "IntelCPU.h"

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

					IntelCPU::IntelCPU(int pins)
					{
						this->pins = pins;
					}

					void IntelCPU::calculate()
					{
						puts("now in Intel CPU,pins="+pins);
					}
				}
			}
		}
	}
}