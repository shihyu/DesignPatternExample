#pragma once

#include "Prototype.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example2
				{
					///
					/// <summary> * 克隆的具体实现对象 </summary>
					/// 
					class ConcretePrototype1 : public Prototype
					{
					public:
						virtual Prototype *clone();
					};


				}
			}
		}
	}
}