#include "ObjectStructure.h"

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

					void ObjectStructure::handleRequest(Visitor *visitor)
					{
						//让组合对象结构中的根元素，接受访问
						//在组合对象结构中已经实现了元素的遍历
						if(root!=0)
						{
							root->accept(visitor);
						}
					}

					void ObjectStructure::setRoot(Component *ele)
					{
						this->root = ele;
					}
				}
			}
		}
	}
}
