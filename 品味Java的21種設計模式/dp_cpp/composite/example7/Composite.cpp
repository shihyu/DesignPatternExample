#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example7
				{

					std::string Composite::getName()
					{
						return this->name;
					}

					void Composite::addChild(Component *child)
					{
						//延迟初始化
						if (childComponents == 0)
						{
							childComponents = std::vector<Component*>();
						}
						childComponents.push_back(child);

						//先判断组件路径是否为空，如果为空，说明本组件是根组件
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(this->getComponentPath() == "" || this->getComponentPath().trim()->length()==0)
						{
							//把本组件的name设置到组件路径中
							this->setComponentPath(this->name);
						}
						//判断要加入的组件在路径上是否出现过
						//先判断是否是根组件
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'startsWith' method:
						if(this->getComponentPath().startsWith(child->getName()+"."))
						{
							//说明是根组件，重复添加了
							throw new java::lang::IllegalArgumentException("在本通路上，组件 '"+child->getName()+"' 已被添加过了");
						}
						else
						{
							if(this->getComponentPath().find("."+child->getName()) < 0)
							{
								//表示没有出现过,那么可以加入
								//计算组件的路径
								std::string componentPath = this->getComponentPath()+"."+child->getName();
								//设置子组件的路径
								child->setComponentPath(componentPath);
							}
							else
							{
								throw new java::lang::IllegalArgumentException("在本通路上，组件 '"+child->getName()+"' 已被添加过了");
							}
						}
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
