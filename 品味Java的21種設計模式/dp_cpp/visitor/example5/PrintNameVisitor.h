#pragma once

#include "Visitor.h"
#include "Composite.h"
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
					///
					/// <summary> * 具体的访问者，实现：输出对象的名称，在组合对象的名称前面添加"节点："，
					/// * 在叶子对象的名称前面添加"叶子：" </summary>
					///
					class PrintNameVisitor : public Visitor
					{
					public:
						virtual void visitComposite(Composite *composite);
						virtual void visitLeaf(Leaf *leaf);
					};

				}
			}
		}
	}
}