#include "PrintNameVisitor.h"

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

					void PrintNameVisitor::visitComposite(Composite *composite)
					{
						//访问到组合对象的数据
						puts("节点："+composite->getName());
					}

					void PrintNameVisitor::visitLeaf(Leaf *leaf)
					{
						//访问到叶子对象的数据		
						puts("叶子："+leaf->getName());
					}
				}
			}
		}
	}
}
