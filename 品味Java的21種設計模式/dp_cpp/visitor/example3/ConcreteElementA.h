#pragma once

#include "Element.h"
#include "Visitor.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example3
				{
					///
					/// <summary> * 具体元素的实现对象 </summary>
					/// 
					class ConcreteElementA : public Element
					{
					public:
						virtual void accept(Visitor *visitor);
					///	
					///	 <summary> * 示例方法，表示元素已有的功能实现 </summary>
					///	 
						virtual void opertionA();
					};


				}
			}
		}
	}
}