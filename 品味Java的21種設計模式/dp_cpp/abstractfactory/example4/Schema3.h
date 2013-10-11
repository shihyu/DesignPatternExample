#pragma once

#include "AbstractFactory.h"
#include "IntelCPU.h"
#include "GAMainboard.h"
#include "HyMemory.h"

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
					/// <summary> * 装机方案三：Intel 的CPU + 技嘉的主板 + 现代的内存 </summary>
					/// 
					class Schema3 : public AbstractFactory
					{
					public:
						virtual object *createProduct(int type);
					};

				}
			}
		}
	}
}