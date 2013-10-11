#pragma once

#include "Handler.h"
#include "RequestModel.h"
#include "FeeRequestModel.h"
#include <string>

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
					/// <summary> * 实现总经理处理聚餐费用申请的对象  </summary>
					/// 
					class GeneralManager : public Handler
					{
					public:
						virtual object *handleRequest(RequestModel *rm);
					private:
						object *handleFeeRequest(RequestModel *rm);
					};

				}
			}
		}
	}
}