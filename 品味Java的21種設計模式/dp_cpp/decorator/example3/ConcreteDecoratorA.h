#pragma once

#include "Decorator.h"
#include "Component.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example3
				{

					///
					/// <summary> * 装饰器的具体实现对象，向组件对象添加职责 </summary>
					/// 
					class ConcreteDecoratorA : public Decorator
					{
					public:
						ConcreteDecoratorA(Component *component);
					///	
					///	 <summary> * 添加的状态 </summary>
					///	 
					private:
						std::string addedState;

					public:
						virtual std::string getAddedState();

						virtual void setAddedState(std::string addedState);

						virtual void operation();
					};


				}
			}
		}
	}
}