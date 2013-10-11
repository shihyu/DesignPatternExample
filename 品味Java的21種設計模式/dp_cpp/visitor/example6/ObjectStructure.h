#pragma once

#include "Component.h"
#include "Visitor.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example6
				{
					///
					/// <summary> * 对象结构,通常在这里对元素对象进行遍历，让访问者能访问到所有的元素 </summary>
					/// 
					class ObjectStructure
					{
					///	
					///	 <summary> * 表示对象结构，可以是一个组合结构 </summary>
					///	 
					private:
						Component *root;
					///	
					///	 <summary> * 提供给客户端操作的高层接口 </summary>
					///	 * <param name="visitor"> 客户端需要使用的访问者 </param>
					///	 
					public:
						virtual void handleRequest(Visitor *visitor);
					///	
					///	 <summary> * 传入组合对象结构 </summary>
					///	 * <param name="ele"> 组合对象结构 </param>
					///	 
						virtual void setRoot(Component *ele);
					};

				}
			}
		}
	}
}