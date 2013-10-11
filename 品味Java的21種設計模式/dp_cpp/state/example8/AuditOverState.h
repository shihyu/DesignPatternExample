#pragma once

#include "LeaveRequestState.h"
#include "StateMachine.h"
#include "LeaveRequestModel.h"

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

					///
					/// <summary> * 处理审核结束的类 </summary>
					/// 
					class AuditOverState : public LeaveRequestState
					{
					public:
						virtual void doWork(StateMachine *request);
					};

				}
			}
		}
	}
}