#include "Leaf.h"

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

					void Leaf::accept(Visitor *visitor)
					{
						//回调访问者对象的相应方法
						visitor->visitLeaf(this);
					}

					Leaf::Leaf(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					std::string Leaf::getName()
					{
						return name;
					}
				}
			}
		}
	}
}