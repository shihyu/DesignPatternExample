#include "ClassAdapter.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example5
				{

					ClassAdapter::ClassAdapter(std::string logFilePathName) : LogFileOperate(logFilePathName)
					{
					}

					void ClassAdapter::createLog(LogModel *lm)
					{
						//1：先读取文件的内容
						std::vector<LogModel*> list = this->readLogFile();
						//2：加入新的日志对象
						list.push_back(lm);
						//3：重新写入文件
						this->writeLogFile(list);
					}

					std::vector<LogModel*> ClassAdapter::getAllLog()
					{
						return this->readLogFile();
					}

					void ClassAdapter::removeLog(LogModel *lm)
					{
						//1：先读取文件的内容
						std::vector<LogModel*> list = this->readLogFile();
						//2：删除相应的日志对象
						list.remove(lm);
						//3：重新写入文件
						this->writeLogFile(list);
					}

					void ClassAdapter::updateLog(LogModel *lm)
					{
						//1：先读取文件的内容
						std::vector<LogModel*> list = this->readLogFile();
						//2：修改相应的日志对象
						for(int i=0;i<list.size();i++)
						{
							if(list.at(i)->getLogId()->equals(lm->getLogId()))
							{
								list.set(i, lm);
								break;
							}
						}
						//3：重新写入文件
						this->writeLogFile(list);
					}
				}
			}
		}
	}
}