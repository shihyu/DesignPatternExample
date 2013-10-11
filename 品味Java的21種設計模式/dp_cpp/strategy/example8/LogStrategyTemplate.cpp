#include "LogStrategyTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example8
				{

					void LogStrategyTemplate::log(std::string msg)
					{
						//第一步：给消息添加记录日志的时间
						DateFormat *df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss SSS");
						msg = df->format(new java::util::Date())+" 内容是："+ msg;
						//第二步：真正执行日志记录
						doLog(msg);
					}
				}
			}
		}
	}
}
