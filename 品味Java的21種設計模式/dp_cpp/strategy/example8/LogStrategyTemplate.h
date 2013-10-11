#pragma once

#include "LogStrategy.h"
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
					/// <summary> * 实现日志策略的抽象模板，实现给消息添加时间 </summary>
					/// 
					class LogStrategyTemplate : public LogStrategy
					{

					public:
						void log(std::string msg);
					///	
					///	 <summary> * 真正执行日志记录，让子类去具体实现 </summary>
					///	 * <param name="msg"> 需记录的日志信息 </param>
					///	 
					protected:
						virtual void doLog(std::string msg) = 0;
					};
				}
			}
		}
	}
}