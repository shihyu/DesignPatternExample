#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example6
				{

					void Composite::addChild(Component *child)
					{
						//延迟初始化
						if (childComponents == 0)
						{
							childComponents = std::vector<Component*>();
						}
						childComponents.push_back(child);

						//添加对父组件的引用
						child->setParent(this);
					}

					void Composite::removeChild(Component *child)
					{
						if (childComponents != 0)
						{
							//查找到要删除的组件在集合中的索引位置
							int idx = childComponents.find(child);
							if (idx != -1)
							{
								//先把被删除的商品类别对象的父商品类别，设置成为被删除的商品类别的子类别的父商品类别
								for (unknown::const_iterator c = child->getChildren().begin(); c != child->getChildren().end(); ++c)
								{
									//删除的组件对象是本实例的一个子组件对象
									(*c)->setParent(this);
									//把被删除的商品类别对象的子组件对象添加到当前实例中
									childComponents.push_back(*c);
								}

								//真的删除
								childComponents.remove(idx);
							}
						}
					}

					std::vector<Component*> Composite::getChildren()
					{
						return childComponents;
					}

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Composite::printStruct(std::string preStr)
					{
						//先把自己输出去
						puts(preStr+"+"+this->name);
						//如果还包含有子组件，那么就输出这些子组件对象
						if(this->childComponents!=0)
						{
							//然后添加一个空格，表示向后缩进一个空格
							preStr+=" ";
							//输出当前对象的子对象了
							for (std::vector<Component*>::const_iterator c = childComponents.begin(); c != childComponents.end(); ++c)
							{
								//递归输出每个子对象
								(*c)->printStruct(preStr);
							}
						}
					}
				}
			}
		}
	}
}