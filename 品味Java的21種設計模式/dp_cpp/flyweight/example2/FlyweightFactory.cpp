#include "FlyweightFactory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example2
				{

					Flyweight *FlyweightFactory::getFlyweight(std::string key)
					{
						//这个方法里面基本的实现步骤如下：		
						//1：先从缓存里面查找，是否存在key对应的Flyweight对象
						Flyweight *f = fsMap->get(key);
						//2：如果存在，就返回相对应的Flyweight对象
						if(f==0)
						{
							//3：如果不存在
							//3.1：创建一个新的Flyweight对象
							f = new ConcreteFlyweight(key);
							//3.2：把这个新的Flyweight对象添加到缓存里面
							fsMap->put(key,f);
							//3.3：然后返回这个新的Flyweight对象
						}
						return f;
					}
				}
			}
		}
	}
}