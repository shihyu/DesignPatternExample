#pragma once

#include "Component.h"
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example2
				{


					///
					/// <summary> * 组合对象，通常需要存储子对象，定义有子部件的部件行为，
					/// * 并实现在Component里面定义的与子部件有关的操作 </summary>
					/// 
					class Composite : public Component
					{
					///	
					///	 <summary> * 用来存储组合对象中包含的子组件对象 </summary>
					///	 
					private:
						std::vector<Component*> childComponents;

					///	
					///	 <summary> * 示意方法，通常在里面需要实现递归的调用 </summary>
					///	 
					public:
						virtual void someOperation();
						virtual void addChild(Component *child);

						virtual void removeChild(Component *child);

						virtual Component *getChildren(int index);
					};


				}
			}
		}
	}
}