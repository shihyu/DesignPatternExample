#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example11
				{

					Singleton::Singleton()
					{
					}

					Singleton Singleton::getInstance()
					{
						return SingletonHolder::instance;
					}
				}
			}
		}
	}
}