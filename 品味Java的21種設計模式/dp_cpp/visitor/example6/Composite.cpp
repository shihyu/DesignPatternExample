#include "Composite.h"

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

					void Composite::accept(Visitor *visitor)
					{
						//回调访问者对象的相应方法
						visitor->visitComposite(this);
					}

					std::vector<Component*> Composite::getChildComponents()
					{
						return childComponents;
					}

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Composite::addChild(Component *child)
					{
						//延迟初始化
						if (childComponents == 0)
						{
							childComponents = std::vector<Component*>();
						}
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
