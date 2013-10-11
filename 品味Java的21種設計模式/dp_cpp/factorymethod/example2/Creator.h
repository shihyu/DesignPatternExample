#pragma once

#include "Product.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example2
				{
					///
					/// <summary> * 创建器，声明工厂方法 </summary>
					/// 
					class Creator
					{
					///	
					///	 <summary> * 创建Product的工厂方法 </summary>
					///	 * <returns> Product对象 </returns>
					///	 
					protected:
						virtual Product *factoryMethod() = 0;
					///	
					///	 <summary> * 示意方法，实现某些功能的方法  </summary>
					///	 
					public:
						virtual void someOperation();

					};


				}
			}
		}
	}
}