#pragma once

#include "MainboardApi.h"

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
					/// <summary> * 微星的主板 </summary>
					/// 
					class MSIMainboard : public MainboardApi
					{
					///	
					///	 <summary> * CPU插槽的孔数 </summary>
					///	 
					private:
						int cpuHoles;
					///	
					///	 <summary> * 构造方法，传入CPU插槽的孔数 </summary>
					///	 * <param name="cpuHoles"> CPU插槽的孔数 </param>
					///	 
					public:
						MSIMainboard(int cpuHoles);
						virtual void installCPU();
					};

				}
			}
		}
	}
}