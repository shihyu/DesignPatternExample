#include "Composite.h"

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

					void Composite::accept(Visitor *visitor)
					{
						//回调访问者对象的相应方法
						visitor->visitComposite(this);
						//循环子元素，让子元素也接受访问
						for (std::vector<Component*>::const_iterator c = childComponents.begin(); c != childComponents.end(); ++c)
						{
							//调用子对象接受访问，变相实现递归
							(*c)->accept(visitor);
						}
					}

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Composite::addChild(Component *child)
					{
						childComponents.push_back(child);
					}

					std::string Composite::getName()
					{
						return name;
					}
				}
			}
		}
	}
}