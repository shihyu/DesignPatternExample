#pragma once

#include "Flyweight.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example2
				{
					///
					/// <summary> * 享元对象 </summary>
					/// 
					class ConcreteFlyweight : public Flyweight
					{
					///	
					///	 <summary> * 示例，描述内部状态 </summary>
					///	 
					private:
						std::string intrinsicState;
					///	
					///	 <summary> * 构造方法，传入享元对象的内部状态的数据 </summary>
					///	 * <param name="state"> 享元对象的内部状态的数据 </param>
					///	 
					public:
						ConcreteFlyweight(std::string state);
						virtual void operation(std::string extrinsicState);
					};

				}
			}
		}
	}
}