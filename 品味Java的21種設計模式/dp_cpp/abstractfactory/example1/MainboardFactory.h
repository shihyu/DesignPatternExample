#pragma once

#include "MainboardApi.h"
#include "GAMainboard.h"
#include "MSIMainboard.h"

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
					/// <summary> * 创建主板的简单工厂 </summary>
					/// 
					class MainboardFactory
					{
					///	
					///	 <summary> * 创建主板接口对象的方法 </summary>
					///	 * <param name="type"> 选择主板类型的参数 </param>
					///	 * <returns> 主板接口对象的方法 </returns>
					///	 
					public:
						static MainboardApi *createMainboardApi(int type);
					};

				}
			}
		}
	}
}