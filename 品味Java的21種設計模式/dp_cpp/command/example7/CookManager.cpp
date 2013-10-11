#include "CookManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example7
				{

					void CookManager::runCookManager()
					{
						if(!runFlag)
						{
							runFlag = true;
							//创建三位厨师
							HotCook *cook1 = new HotCook("张三");
							HotCook *cook2 = new HotCook("李四");
							HotCook *cook3 = new HotCook("王五");
							//启动他们的线程
							Thread *t1 = new Thread(cook1);
							t1->start();
							Thread *t2 = new Thread(cook2);
							t2->start();
							Thread *t3 = new Thread(cook3);
							t3->start();
						}
					}
				}
			}
		}
	}
}