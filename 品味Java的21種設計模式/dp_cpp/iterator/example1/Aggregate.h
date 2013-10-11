#pragma once

#include "Iterator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example1
				{

					///
					/// <summary> * 聚合对象的接口，定义创建相应迭代器对象的接口 </summary>
					/// 
					class Aggregate
					{
					///	
					///	 <summary> * 工厂方法，创建相应迭代器对象的接口 </summary>
					///	 * <returns> 相应迭代器对象的接口 </returns>
					///	 
					public:
						virtual Iterator *createIterator() = 0;
					};


				}
			}
		}
	}
}