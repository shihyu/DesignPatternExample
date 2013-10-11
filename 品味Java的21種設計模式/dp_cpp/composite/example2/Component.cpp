#include "Component.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example2
				{

					void Component::addChild(Component *child)
					{
						// 缺省的实现，抛出例外，因为叶子对象没有这个功能，或者子组件没有实现这个功能
						throw new UnsupportedOperationException("对象不支持这个功能");
					}

					void Component::removeChild(Component *child)
					{
						// 缺省的实现，抛出例外，因为叶子对象没有这个功能，或者子组件没有实现这个功能
						throw new UnsupportedOperationException("对象不支持这个功能");
					}

					Component *Component::getChildren(int index)
					{
						// 缺省的实现，抛出例外，因为叶子对象没有这个功能，或者子组件没有实现这个功能
						throw new UnsupportedOperationException("对象不支持这个功能");
					}
				}
			}
		}
	}
}
