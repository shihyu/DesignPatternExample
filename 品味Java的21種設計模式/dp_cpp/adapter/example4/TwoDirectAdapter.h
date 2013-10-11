#pragma once

#include "LogFileOperateApi.h"
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
					/// <summary> * 双向适配器对象 </summary>
					/// 
					class TwoDirectAdapter : public LogDbOperateApi, LogFileOperateApi
					{
					///	
					///	 <summary> * 持有需要被适配的文件存储日志的接口对象 </summary>
					///	 
					private:
						LogFileOperateApi *fileLog;
					///	
					///	 <summary> * 持有需要被适配的DB存储日志的接口对象 </summary>
					///	 
						LogDbOperateApi *dbLog;
					///	
					///	 <summary> * 构造方法，传入需要被适配的对象 </summary>
					///	 * <param name="fileLog"> 需要被适配的文件存储日志的接口对象 </param>
					///	 * <param name="dbLog"> 需要被适配的DB存储日志的接口对象 </param>
					///	 
					public:
						TwoDirectAdapter(LogFileOperateApi *fileLog, LogDbOperateApi *dbLog);
					/*-----以下是把文件操作的方式适配成为DB实现方式的接口-----*/	
						virtual void createLog(LogModel *lm);

						virtual std::vector<LogModel*> getAllLog();

						virtual void removeLog(LogModel *lm);

						virtual void updateLog(LogModel *lm);
					/*-----以下是把DB操作的方式适配成为文件实现方式的接口-----*/
						virtual std::vector<LogModel*> readLogFile();

						virtual void writeLogFile(std::vector<LogModel*> &list);
					};

				}
			}
		}
	}
}