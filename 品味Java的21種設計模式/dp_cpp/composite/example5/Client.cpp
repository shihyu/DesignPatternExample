#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//定义所有的组合对象
						Composite *root = new Composite("服装");
						Composite *c1 = new Composite("男装");
						Composite *c2 = new Composite("女装");
						//定义所有的叶子对象
						Leaf *leaf1 = new Leaf("衬衣");
						Leaf *leaf2 = new Leaf("夹克");
						Leaf *leaf3 = new Leaf("裙子");
						Leaf *leaf4 = new Leaf("套装");
						//按照树的结构来组合组合对象和叶子对象
						root->addChild(c1);
						root->addChild(c2);

						c1->addChild(leaf1);
						c1->addChild(leaf2);

						c2->addChild(leaf3);
						c2->addChild(leaf4);

						//调用根对象的输出功能来输出整棵树
						root->printStruct("");
					}
				}
			}
		}
	}
}
