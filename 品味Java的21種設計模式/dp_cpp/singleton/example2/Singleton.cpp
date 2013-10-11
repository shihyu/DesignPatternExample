#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example2
				{

					Singleton::Singleton()
					{
						//
					}

					Singleton Singleton::getInstance()
					{
						//判断存储实例的变量是否有值
						if(uniqueInstance == 0)
						{
							//如果没有，就创建一个类实例，并把值赋值给存储类实例的变量
							uniqueInstance = new Singleton();
						}
						//如果有值，那就直接使用
						return uniqueInstance;
					}

					void Singleton::singletonOperation()
					{
						//功能处理
					}

					std::string Singleton::getSingletonData()
					{
						return singletonData;
					}
				}
			}
		}
	}
}