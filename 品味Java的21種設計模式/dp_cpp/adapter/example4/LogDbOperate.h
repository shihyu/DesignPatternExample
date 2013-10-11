#pragma once

#include "LogDbOperateApi.h"
#include "LogModel.h"
#include <vector>

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

					///
					/// <summary> * DB存储日志的实现，为了简单，这里就不去真的实现和数据库交互了，示意一下 </summary>
					/// 
					class LogDbOperate : public LogDbOperateApi
					{

					public:
						virtual void createLog(LogModel *lm);

						virtual std::vector<LogModel*> getAllLog();

						virtual void removeLog(LogModel *lm);

						virtual void updateLog(LogModel *lm);

					};

				}
			}
		}
	}
}