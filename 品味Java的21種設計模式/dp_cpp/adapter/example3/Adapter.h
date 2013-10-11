#pragma once

#include "LogDbOperateApi.h"
#include "LogFileOperateApi.h"
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
				namespace example3
				{


					///
					/// <summary> * 适配器对象，把记录日志到文件的功能适配成第二版需要的增删改查的功能 </summary>
					/// 
					class Adapter : public LogDbOperateApi
					{
					///	
					///	 <summary> * 持有需要被适配的接口对象 </summary>
					///	 
					private:
						LogFileOperateApi *adaptee;
					///	
					///	 <summary> * 构造方法，传入需要被适配的对象 </summary>
					///	 * <param name="adaptee"> 需要被适配的对象 </param>
					///	 
					public:
						Adapter(LogFileOperateApi *adaptee);

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