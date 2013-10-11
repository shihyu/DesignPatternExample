#include "AuditOverState.h"

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

					void AuditOverState::doWork(StateMachine *request)
					{
						//先把业务对象造型回来
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());
						puts(lrm->getUser()+"，你的请假申请已经审核结束，结果是："+lrm->getResult());
					}
				}
			}
		}
	}
}
