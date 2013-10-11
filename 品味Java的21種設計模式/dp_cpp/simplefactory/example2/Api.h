#pragma once
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example2
				{
					///
					/// <summary> * 接口的定义，该接口可以通过简单工厂来创建 </summary>
					/// 
					class Api
					{
					///	
					///	 <summary> * 示意，具体的功能方法的定义 </summary>
					///	 * <param name="s"> 示意，需要的参数 </param>
					///	 
					public:
						virtual void operation(std::string) = 0;
					};

				}
			}
		}
	}
}
