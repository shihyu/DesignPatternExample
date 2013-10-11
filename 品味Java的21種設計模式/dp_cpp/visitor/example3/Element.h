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
				namespace example3
				{
					///
					/// <summary> * 被访问的元素的接口 </summary>
					/// 
					class Element
					{
					///	
					///	 <summary> * 接受访问者的访问 </summary>
					///	 * <param name="visitor"> 访问者对象 </param>
					///	 
					public:
						virtual void accept(Visitor *visitor) = 0;
					};


				}
			}
		}
	}
}