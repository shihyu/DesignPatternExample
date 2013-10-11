#pragma once

#include "Component.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example4
				{


					///
					/// <summary> * 装饰器的接口，需要跟被装饰的对象实现同样的接口 </summary>
					/// 
					class Decorator : public Component
					{
					///	
					///	 <summary> * 持有被装饰的组件对象 </summary>
					///	 
					protected:
						Component *c;
					///	
					///	 <summary> * 通过构造方法传入被装饰的对象 </summary>
					///	 * <param name="c被装饰的对象"> </param>
					///	 
					public:
						Decorator(Component *c);

						virtual double calcPrize(std::string user, Date *begin, Date *end);
					};

				}
			}
		}
	}
}