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

					std::string LogModel::getLogId()
					{
						return logId;
					}

					void LogModel::setLogId(std::string logId)
					{
						this->logId = logId;
					}

					std::string LogModel::getOperateUser()
					{
						return operateUser;
					}

					void LogModel::setOperateUser(std::string operateUser)
					{
						this->operateUser = operateUser;
					}

					std::string LogModel::getOperateTime()
					{
						return operateTime;
					}

					void LogModel::setOperateTime(std::string operateTime)
					{
						this->operateTime = operateTime;
					}

					std::string LogModel::getLogContent()
					{
						return logContent;
					}

					void LogModel::setLogContent(std::string logContent)
					{
						this->logContent = logContent;
					}

					std::string LogModel::ToString()
					{
						return "logId="+logId+",operateUser="+operateUser+",operateTime="+operateTime+",logContent="+logContent;
					}
				}
			}
		}
	}
}
