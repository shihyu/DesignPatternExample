#pragma once

#include "Implementor.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example5
				{

					///
					/// <summary> * 定义抽象部分的接口 </summary>
					/// 
					class Abstraction
					{
					///	
					///	 <summary> * 持有一个实现部分的对象 </summary>
					///	 
					protected:
						Implementor *impl;
					///	
					///	 <summary> * 构造方法，传入实现部分的对象  </summary>
					///	 * <param name="impl"> 实现部分的对象 </param>
					///	 
					public:
						Abstraction(Implementor *impl);
					///	
					///	 <summary> * 示例操作，实现一定的功能，可能需要转调实现部分的具体实现方法 </summary>
					///	 
						virtual void operation();
					};


				}
			}
		}
	}
}