#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example10
				{

					Singleton::Singleton()
					{

					}

					Singleton Singleton::getInstance()
					{
						//先检查实例是否存在，如果不存在才进入下面的同步块
						if(instance == 0)
						{
							//同步块，线程安全的创建实例
//JAVA TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							synchronized(Singleton::typeid)
							{
								//再次检查实例是否存在，如果不存在才真的创建实例
								if(instance == 0)
								{
									instance = new Singleton();
								}
							}
						}
						return instance;
					}
				}
			}
		}
	}
}