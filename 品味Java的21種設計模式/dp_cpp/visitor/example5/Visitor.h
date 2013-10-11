#pragma once

#include "Composite.h"
#include "Leaf.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example5
				{
					///
					/// <summary> * 访问组合对象结构的访问者接口 </summary>
					/// 
					class Visitor
					{
					///	
					///	 <summary> * 访问组合对象，相当于给组合对象添加访问者的功能 </summary>
					///	 * <param name="composite"> 组合对象 </param>
					///	 
					public:
						virtual public void visitComposite(Composite*) = 0;
					///	
					///	 <summary> * 访问叶子对象，相当于给叶子对象添加访问者的功能 </summary>
					///	 * <param name="leaf"> 叶子对象 </param>
					///	 
						virtual public void visitLeaf(Leaf*) = 0;
					};
				}
			}
		}
	}
}