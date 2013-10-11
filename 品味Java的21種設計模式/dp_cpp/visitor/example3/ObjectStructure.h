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
					/// <summary> * 对象结构,通常在这里对元素对象进行遍历，让访问者能访问到所有的元素 </summary>
					/// 
					class ObjectStructure
					{
					///	
					///	 <summary> * 示意，表示对象结构，可以是一个组合结构或是集合 </summary>
					///	 
					private:
						Collection<Element*> *col;
					///	
					///	 <summary> * 示意方法，提供给客户端操作的高层接口 </summary>
					///	 * <param name="visitor"> 客户端需要使用的访问者 </param>
					///	 
					public:
						virtual void handleRequest(Visitor *visitor);
					///	
					///	 <summary> * 示意方法，组建对象结构，向对象结构中添加元素。
					///	 * 不同的对象结构有不同的构建方式 </summary>
					///	 * <param name="ele"> 加入到对象结构的元素 </param>
					///	 
						virtual void addElement(Element *ele);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								col = std::vector<Element*>();

								initialized = true;
							}
						}

public:
	ObjectStructure()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}