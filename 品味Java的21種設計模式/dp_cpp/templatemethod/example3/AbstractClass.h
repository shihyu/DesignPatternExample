#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example3
				{
					///
					/// <summary> * 定义模板方法、原语操作等的抽象类 </summary>
					/// 
					class AbstractClass
					{
					///	
					///	 <summary> * 原语操作1，所谓原语操作就是抽象的操作，必须要由子类提供实现 </summary>
					///	 
					public:
						virtual void doPrimitiveOperation1() = 0;
					///	
					///	 <summary> * 原语操作2 </summary>
					///	 
						virtual void doPrimitiveOperation2() = 0;
					///	
					///	 <summary> * 模板方法，定义算法骨架 </summary>
					///	 
						void templateMethod();
					};


				}
			}
		}
	}
}