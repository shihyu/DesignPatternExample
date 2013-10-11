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
				namespace example1
				{
					///
					/// <summary> * 技嘉的主板  </summary>
					/// 
					class GAMainboard : public MainboardApi
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
						GAMainboard(int cpuHoles);
						virtual void installCPU();
					};

				}
			}
		}
	}
}