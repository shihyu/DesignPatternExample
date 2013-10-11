#pragma once

#include "GeneralManager.h"
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
					/// <summary> * 实现总经理处理预支差旅费用申请的对象  </summary>
					/// 
					class GeneralManager2 : public GeneralManager
					{
					public:
						virtual object *handleRequest(RequestModel *rm);
					private:
						object *myHandler(RequestModel *rm);
					};

				}
			}
		}
	}
}