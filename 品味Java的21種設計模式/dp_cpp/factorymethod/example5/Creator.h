#pragma once

#include "Product1.h"
#include "Product2.h"
#include "Product.h"
#include "ConcreteProduct.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example5
				{
					///
					/// <summary> * 客户端使用Creator来创建客户端需要的对象的情况下，Creator的基本实现结构 </summary>
					/// 
					class Creator
					{
					///	
					///	 <summary> * 工厂方法，一般不对外，创建一个部件对象 </summary>
					///	 * <returns> 创建的产品对象，一般是另一个产品对象的部件 </returns>
					///	 
					protected:
						virtual Product1 *factoryMethod1() = 0;
					///	
					///	 <summary> * 工厂方法，一般不对外，创建一个部件对象 </summary>
					///	 * <returns> 创建的产品对象，一般是另一个产品对象的部件 </returns>
					///	 
						virtual Product2 *factoryMethod2() = 0;
					///	
					///	 <summary> * 创建客户端需要的对象，客户端主要使用产品对象来完成所需要的功能 </summary>
					///	 * <returns> 客户端需要的对象 </returns>
					///	 
					public:
						virtual Product *createProduct();
					};

				}
			}
		}
	}
}