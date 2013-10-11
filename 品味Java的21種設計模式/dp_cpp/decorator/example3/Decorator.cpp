#include "Decorator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example3
				{

					Decorator::Decorator(Component *component)
					{
						this->component = component;
					}

					void Decorator::operation()
					{
						//转发请求给组件对象，可以在转发前后执行一些附加动作
						component->operation();
					}
				}
			}
		}
	}
}
