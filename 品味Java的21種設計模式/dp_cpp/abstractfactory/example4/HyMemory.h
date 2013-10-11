#pragma once

#include "MemoryApi.h"

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
					///
					/// <summary> * 现代内存的类 </summary>
					/// 
					class HyMemory : public MemoryApi
					{
					public:
						virtual void cacheData();
					};

				}
			}
		}
	}
}