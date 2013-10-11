#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example8
				{

					Singleton::Singleton()
					{
						//
					}

					Singleton Singleton::getInstance()
					{
						//先从缓存中获取
						Singleton instance = static_cast<Singleton>(map->get(DEFAULT_KEY));
						//如果没有，就新建一个，然后设置回缓存中
						if(instance==0)
						{
							instance = new Singleton();
							map->put(DEFAULT_KEY, instance);
						}
						//如果有就直接使用
						return instance;
					}
				}
			}
		}
	}
}