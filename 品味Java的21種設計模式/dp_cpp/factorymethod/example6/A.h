#pragma once

#include "C.h"

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

					class A
					{
					///	
					///	 <summary> * 等待被注入进来 </summary>
					///	 
					private:
						C *c;
					///	
					///	 <summary> * 注入资源C的方法 </summary>
					///	 * <param name="c"> 被注入的资源 </param>
					///	 
					public:
						virtual void setC(C *c);
						virtual void t1();
					};

				}
			}
		}
	}
}