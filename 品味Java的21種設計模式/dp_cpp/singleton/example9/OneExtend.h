#pragma once

#include <string>
#include <map>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example9
				{
					///
					/// <summary> * 简单演示如何扩展单例模式，控制实例数目为3个  </summary>
					/// 
					class OneExtend
					{
					///	
					///	 <summary> * 定义一个缺省的key值的前缀 </summary>
					///	 
					private:
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static const std::string DEFAULT_PREKEY = "Cache";
					///	
					///	 <summary> * 缓存实例的容器 </summary>
					///	 
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static Map<std::string, OneExtend*> *map = std::map<std::string, OneExtend*>();
					///	
					///	 <summary> * 用来记录当前正在使用第几个实例，到了控制的最大数目，就返回从1开始 </summary>
					///	 
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static int num = 1;
					///	
					///	 <summary> * 定义控制实例的最大数目 </summary>
					///	 
						static const int NUM_MAX = 3;
						OneExtend();
					public:
						static OneExtend *getInstance();

						static void main(std::string args[]);
					};

				}
			}
		}
	}
}