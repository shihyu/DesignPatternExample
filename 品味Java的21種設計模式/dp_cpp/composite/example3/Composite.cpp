#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example3
				{

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