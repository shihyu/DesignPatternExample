#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example5
				{
					///
					/// <summary> * 一个较为完整的模版定义示例 </summary>
					/// 
					class AbstractTemplate
					{
					///	
					///	 <summary> * 模板方法，定义算法骨架 </summary>
					///	 
					public:
						void templateMethod();
					///	
					///	 <summary> * 具体操作1，算法中的步骤，固定实现，而且子类不需要访问 </summary>
					///	 
					private:
						void operation1();
					///	
					///	 <summary> * 具体操作2，算法中的步骤，固定实现，子类可能需要访问，
					///	 * 当然也可以定义成public的，不可以被覆盖，因此是final的 </summary>
					///	 
					protected:
						void operation2();
					///	
					///	 <summary> * 具体的AbstractClass操作，子类的公共功能，
					///	 * 但通常不是具体的算法步骤 </summary>
					///	 
						virtual void commonOperation();
					///	
					///	 <summary> * 原语操作1，算法中的必要步骤，父类无法确定如何真正实现，需要子类来实现 </summary>
					///	 
						virtual void doPrimitiveOperation1() = 0;
					///	
					///	 <summary> * 原语操作2，算法中的必要步骤，父类无法确定如何真正实现，需要子类来实现 </summary>
					///	 
						virtual void doPrimitiveOperation2() = 0;
					///	
					///	 <summary> * 钩子操作，算法中的步骤，不一定需要，提供缺省实现
					///	 * 由子类选择并具体实现 </summary>
					///	 
						virtual void hookOperation1();
					///	
					///	 <summary> * 工厂方法，创建某个对象，这里用Object代替了，在算法实现中可能需要 </summary>
					///	 * <returns> 创建的某个算法实现需要的对象 </returns>
					///	 
						virtual object *createOneObject() = 0;
					};

				}
			}
		}
	}
}