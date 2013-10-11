#include "JavaCache.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example7
				{

					object *JavaCache::getValue(std::string key)
					{
						//先从缓存里面取值
						object *obj = map->get(key);
						//判断缓存里面是否有值
						if(obj == 0)
						{
							//如果没有，那么就去获取相应的数据，比如读取数据库或者文件
							//这里只是演示，所以直接写个假的值
							obj = key+",value";
							//把获取的值设置回到缓存里面
							map->put(key, obj);
						}
						//如果有值了，就直接返回使用
						return obj;
					}
				}
			}
		}
	}
}