#pragma once

#include "CPUApi.h"
#include "IntelCPU.h"
#include "AMDCPU.h"

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
					///
					/// <summary> * 创建CPU的简单工厂 </summary>
					/// 
					class CPUFactory
					{
					///	
					///	 <summary> * 创建CPU接口对象的方法 </summary>
					///	 * <param name="type"> 选择CPU类型的参数 </param>
					///	 * <returns> CPU接口对象的方法 </returns>
					///	 
					public:
						static CPUApi *createCPUApi(int type);
					};

				}
			}
		}
	}
}