#pragma once

#include "Component.h"
#include <string>
#include <vector>

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

					///
					/// <summary> * 组合对象，可以包含其它组合对象或者叶子对象 </summary>
					/// 
					class Composite : public Component
					{
					public:
						virtual std::string getName();
						virtual void addChild(Component *child);

						/*---------------以下是原有的实现，没有变化------------------*/		
					///	
					///	 <summary> * 用来存储组合对象中包含的子组件对象 </summary>
					///	 
					private:
						std::vector<Component*> childComponents;
					///	
					///	 <summary> * 组合对象的名字 </summary>
					///	 
						std::string name;
					///	
					///	 <summary> * 构造方法，传入组合对象的名字 </summary>
					///	 * <param name="name"> 组合对象的名字 </param>
					///	 
					public:
						Composite(std::string name);
					///	
					///	 <summary> * 输出组合对象自身的结构 </summary>
					///	 * <param name="preStr"> 前缀，主要是按照层级拼接的空格，实现向后缩进 </param>
					///	 
						virtual void printStruct(std::string preStr);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
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