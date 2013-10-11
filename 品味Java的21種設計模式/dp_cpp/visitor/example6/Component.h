#pragma once

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
					/// <summary> * 抽象的组件对象，相当于访问者模式中的元素对象 </summary>
					/// 
					class Component
					{
					///	
					///	 <summary> * 接受访问者的访问 </summary>
					///	 * <param name="visitor"> 访问者对象 </param>
					///	 
					public:
						virtual void accept(Visitor *visitor) = 0;

					///	
					///	 <summary> * 向组合对象中加入组件对象  </summary>
					///	 * <param name="child"> 被加入组合对象中的组件对象 </param>
					///	 
						virtual void addChild(Component *child);
					///	
					///	 <summary> * 从组合对象中移出某个组件对象 </summary>
					///	 * <param name="child"> 被移出的组件对象 </param>
					///	 
						virtual void removeChild(Component *child);
					///	
					///	 <summary> * 返回某个索引对应的组件对象，如果没有对应的子对象，就返回null </summary>
					///	 * <param name="index"> 需要获取的组件对象的索引，索引从0开始 </param>
					///	 * <returns> 索引对应的组件对象 </returns>
					///	 
						virtual Component *getChildren(int index);
					};


				}
			}
		}
	}
}