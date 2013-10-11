#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example4
				{

					///
					/// <summary> * 可扩展的抽象工厂的接口 </summary>
					/// 
					class AbstractFactory
					{
					///	
					///	 <summary> * 一个通用的创建产品对象的方法，为了简单，直接返回Object
					///	 * 也可以为所有被创建的产品定义一个公共的接口 </summary>
					///	 * <param name="type"> 具体创建的产品类型标识 </param>
					///	 * <returns> 创建出的产品对象 </returns>
					///	 
					public:
						virtual public object *createProduct(int) = 0;
					};
				}
			}
		}
	}
}