#pragma once

#include "Builder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example2
				{
					///
					/// <summary> * 指导者，指导使用构建器的接口来构建产品的对象 </summary>
					/// 
					class Director
					{
					///	
					///	 <summary> * 持有当前需要使用的构建器对象 </summary>
					///	 
					private:
						Builder *builder;
					///	
					///	 <summary> * 构造方法，传入构建器对象 </summary>
					///	 * <param name="builder"> 构建器对象 </param>
					///	 
					public:
						Director(Builder *builder);
					///	
					///	 <summary> * 示意方法，指导构建器构建最终的产品对象 </summary>
					///	 
						virtual void construct();
					};
				}
			}
		}
	}
}