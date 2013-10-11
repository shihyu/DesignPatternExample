#pragma once

#include "AModuleApi.h"
#include "AModuleImpl.h"
#include "BModuleApi.h"
#include "BModuleImpl.h"
#include "CModuleApi.h"
#include "CModuleImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example2
				{
					///
					/// <summary> * 外观对象 </summary>
					/// 
					class Facade
					{
					///	
					///	 <summary> * 示意方法，满足客户需要的功能 </summary>
					///	 
					public:
						virtual void test();
					};

				}
			}
		}
	}
}