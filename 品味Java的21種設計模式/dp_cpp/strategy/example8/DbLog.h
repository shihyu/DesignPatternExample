#pragma once

#include "LogStrategyTemplate.h"
#include <string>

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
					///
					/// <summary> * 把日志记录到数据库 </summary>
					/// 
					class DbLog : public LogStrategyTemplate
					{
					public:
						virtual void doLog(std::string msg);
					};

				}
			}
		}
	}
}