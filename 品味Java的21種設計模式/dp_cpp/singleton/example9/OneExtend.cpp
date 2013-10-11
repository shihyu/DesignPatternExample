#include "OneExtend.h"

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

					OneExtend::OneExtend()
					{
					}

					OneExtend *OneExtend::getInstance()
					{
						std::string key = DEFAULT_PREKEY+num;
						OneExtend *oneExtend = map->get(key);
						if(oneExtend==0)
						{
							oneExtend = new OneExtend();
							map->put(key, oneExtend);
						}
						//把当前实例的序号加1
						num++;
						if(num > NUM_MAX)
						{
							//如果实例的序号已经达到最大数目了，那就重复从1开始获取
							num = 1;
						}
						return oneExtend;
					}

					void OneExtend::main(std::string args[])
					{
						OneExtend *t1 = getInstance();
						OneExtend *t2 = getInstance();
						OneExtend *t3 = getInstance();
						OneExtend *t4 = getInstance();
						OneExtend *t5 = getInstance();
						OneExtend *t6 = getInstance();

						puts("t1=="+t1);
						puts("t2=="+t2);
						puts("t3=="+t3);
						puts("t4=="+t4);
						puts("t5=="+t5);
						puts("t6=="+t6);
					}
				}
			}
		}
	}
}
