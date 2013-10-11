#pragma once

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

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
					/// <summary> * 访问者接口 </summary>
					/// 
					class Visitor
					{
					///	
					///	 <summary> * 访问元素A，相当于给元素A添加访问者的功能 </summary>
					///	 * <param name="elementA"> 元素A的对象 </param>
					///	 
					public:
						virtual public void visitConcreteElementA(ConcreteElementA*) = 0;
					///	
					///	 <summary> * 访问元素B，相当于给元素B添加访问者的功能 </summary>
					///	 * <param name="elementB"> 元素B的对象 </param>
					///	 
						virtual public void visitConcreteElementB(ConcreteElementB*) = 0;
					};


				}
			}
		}
	}
}