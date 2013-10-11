#pragma once

#include "CPUApi.h"
#include "MainboardApi.h"
#include "CPUFactory.h"
#include "MainboardFactory.h"

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
					/// <summary> * 装机工程师的类 </summary>
					/// 
					class ComputerEngineer
					{
					///	
					///	 <summary> * 定义组装机器需要的CPU </summary>
					///	 
					private:
						CPUApi *cpu;
					///	
					///	 <summary> * 定义组装机器需要的主板 </summary>
					///	 
						MainboardApi *mainboard;

					///	
					///	 <summary> * 装机过程 </summary>
					///	 * <param name="cpuType"> 客户选择所需CPU的类型 </param>
					///	 * <param name="mainboardType"> 客户选择所需主板的类型 </param>
					///	 
					public:
						virtual void makeComputer(int cpuType, int mainboardType);
					///	
					///	 <summary> * 准备装机所需要的配件 </summary>
					///	 * <param name="cpuType"> 客户选择所需CPU的类型 </param>
					///	 * <param name="mainboardType"> 客户选择所需主板的类型 </param>
					///	 
					private:
						void prepareHardwares(int cpuType, int mainboardType);
					};

				}
			}
		}
	}
}