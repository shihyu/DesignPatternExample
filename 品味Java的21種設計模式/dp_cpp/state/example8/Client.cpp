#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example8
				{

					void Client::main(std::string args[])
					{
						//创建业务对象，并设置业务数据
						LeaveRequestModel *lrm = new LeaveRequestModel();
						lrm->setUser("小李");
						lrm->setBeginDate("2010-02-08");
						lrm->setLeaveDays(5);

						//创建上下文对象
						LeaveRequestContext *request = new LeaveRequestContext();
						//为上下文对象设置业务数据对象
						request->setBusinessVO(lrm);
						//配置上下文，作为开始的状态，以后就不管了
						request->setState(new ProjectManagerState());

						//请求上下文，让上下文开始处理工作
						request->doWork();
					}
				}
			}
		}
	}
}
