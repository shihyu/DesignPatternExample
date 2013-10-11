#include "DbLog.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example6
				{

					void DbLog::log(std::string msg)
					{
						//制造错误
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(msg!="" && msg.trim()->length()>5)
						{
							int a = 5/0;
						}
						puts("现在把 '"+msg+"' 记录到数据库中");
					}
				}
			}
		}
	}
}
