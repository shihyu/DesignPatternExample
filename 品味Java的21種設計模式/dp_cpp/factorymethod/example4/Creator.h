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
				namespace example4
				{
					///
					/// <summary> * 客户端使用Creator对象的情况下，Creator的基本实现结构 </summary>
					/// 
					class Creator
					{
					///	
					///	 <summary> * 工厂方法，一般不对外 </summary>
					///	 * <returns> 创建的产品对象 </returns>
					///	 
					protected:
						virtual Product *factoryMethod() = 0;
					///	
					///	 <summary> * 提供给外部使用的方法，
					///	 * 客户端一般使用Creator提供的这些方法来完成所需要的功能 </summary>
					///	 
					public:
						virtual void someOperation();
					};

				}
			}
		}
	}
}