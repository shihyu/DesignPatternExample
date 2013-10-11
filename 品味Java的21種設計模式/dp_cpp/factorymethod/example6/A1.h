#pragma once

#include "C1.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example6
				{

					class A1
					{
					///	
					///	 <summary> * 工厂方法，创建C1，类似于从子类注入进来的途径 </summary>
					///	 * <returns> C1的对象实例 </returns>
					///	 
					protected:
						virtual C1 *createC1() = 0;
					public:
						virtual void t1();
					};

				}
			}
		}
	}
}