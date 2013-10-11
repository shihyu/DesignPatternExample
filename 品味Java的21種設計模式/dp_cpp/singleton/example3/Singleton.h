#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example3
				{
					///
					/// <summary> * 饿汉式单例实现的示例 </summary>
					/// 
					class Singleton
					{
					///	
					///	 <summary> * 定义一个变量来存储创建好的类实例，直接在这里创建类实例，只会创建一次 </summary>
					///	 
					private:
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static Singleton uniqueInstance = new Singleton();
					///	
					///	 <summary> * 私有化构造方法，好在内部控制创建实例的数目 </summary>
					///	 
						Singleton();
					///	
					///	 <summary> * 定义一个方法来为客户端提供类实例 </summary>
					///	 * <returns> 一个Singleton的实例 </returns>
					///	 
					public:
						static Singleton getInstance();

					///	
					///	 <summary> * 示意方法，单例可以有自己的操作 </summary>
					///	 
						virtual void singletonOperation();
					///	
					///	 <summary> * 示意属性，单例可以有自己的属性 </summary>
					///	 
					private:
						std::string singletonData;
					///	
					///	 <summary> * 示意方法，让外部通过这些方法来访问属性的值 </summary>
					///	 * <returns> 属性的值 </returns>
					///	 
					public:
						virtual std::string getSingletonData();
					};

				}
			}
		}
	}
}