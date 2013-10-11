#pragma once

#include "Component.h"
#include "Visitor.h"
#include <string>
#include <vector>

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
					///
					/// <summary> * 组合对象，可以包含其它组合对象或者叶子对象，
					/// * 相当于访问者模式的具体Element实现对象 </summary>
					/// 
					class Composite : public Component
					{
					public:
						virtual void accept(Visitor *visitor);
					///	
					///	 <summary> * 用来存储组合对象中包含的子组件对象 </summary>
					///	 
					private:
						std::vector<Component*> childComponents;
					public:
						virtual std::vector<Component*> getChildComponents();
					///	
					///	 <summary> * 组合对象的名字 </summary>
					///	 
					private:
						std::string name;
					///	
					///	 <summary> * 构造方法，传入组合对象的名字 </summary>
					///	 * <param name="name"> 组合对象的名字 </param>
					///	 
					public:
						Composite(std::string name);

						virtual void addChild(Component *child);
						virtual std::string getName();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								childComponents = std::vector<Component*>();
								name = "";

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}