#include "LogDbOperate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example4
				{

					void LogDbOperate::createLog(LogModel *lm)
					{
						puts("now in LogDbOperate createLog,lm="+lm);
					}

					std::vector<LogModel*> LogDbOperate::getAllLog()
					{
						puts("now in LogDbOperate getAllLog");
						return 0;
					}

					void LogDbOperate::removeLog(LogModel *lm)
					{
						puts("now in LogDbOperate removeLog,lm="+lm);
					}

					void LogDbOperate::updateLog(LogModel *lm)
					{
						puts("now in LogDbOperate updateLog,lm="+lm);
					}
				}
			}
		}
	}
}