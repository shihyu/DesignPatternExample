#pragma once

#include "DepManager.h"
#include "RequestModel.h"
#include "PreFeeRequestModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{
					///
					/// <summary> * 实现部门经理处理预支差旅费用申请的对象  </summary>
					/// 
					class DepManager2 : public DepManager
					{
					public:
						virtual object *handleRequest(RequestModel *request);
					private:
						object *myHandler(RequestModel *request);
					};

				}
			}
		}
	}
}