#include "TempDB.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example1
				{

					TempDB::TempDB()
					{
					}

					TempDB::TempDB()
					{
						//填充测试数据
						mapMonthSaleMoney->put("张三",10000.0);
						mapMonthSaleMoney->put("李四",20000.0);
						mapMonthSaleMoney->put("王五",30000.0);
					}
				}
			}
		}
	}
}