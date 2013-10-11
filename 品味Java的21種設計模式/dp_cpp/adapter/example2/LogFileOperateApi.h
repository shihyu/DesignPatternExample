#pragma once

#include "LogModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example2
				{

					///
					/// <summary> * 日志文件操作接口 </summary>
					/// 
					class LogFileOperateApi
					{
					///	
					///	 <summary> * 读取日志文件，从文件里面获取存储的日志列表对象 </summary>
					///	 * <returns> 存储的日志列表对象 </returns>
					///	 
					public:
						virtual public std::vector<LogModel*> readLogFile() = 0;
					///	
					///	 <summary> * 写日志文件，把日志列表写出到日志文件中去 </summary>
					///	 * <param name="list"> 要写到日志文件的日志列表 </param>
					///	 
						virtual public void writeLogFile(std::vector<LogModel*>&) = 0;
					};

				}
			}
		}
	}
}