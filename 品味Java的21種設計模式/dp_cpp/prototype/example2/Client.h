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
					/// <summary> * 使用原型的客户端 </summary>
					/// 
					class Client
					{
					///	
					///	 <summary> * 持有需要使用的原型接口对象 </summary>
					///	 
					private:
						Prototype *prototype;
					///	
					///	 <summary> * 构造方法，传入需要使用的原型接口对象 </summary>
					///	 * <param name="prototype"> 需要使用的原型接口对象 </param>
					///	 
					public:
						Client(Prototype *prototype);
					///	
					///	 <summary> * 示意方法，执行某个功能操作 </summary>
					///	 
						virtual void operation();
					};
				}
			}
		}
	}
}