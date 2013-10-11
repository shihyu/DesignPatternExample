#include "LogContext.h"

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

					void LogContext::log(std::string msg)
					{
						//在上下文里面，自行实现对具体策略的选择
						//优先选用策略：记录到数据库
						LogStrategy *strategy = new DbLog();
						try
						{
							strategy->log(msg);
						}
						catch(Exception *err)
						{
							//出错了，那就记录到文件中
							strategy = new FileLog();
							strategy->log(msg);
						}
					}
				}
			}
		}
	}
}
