#pragma once

#include "RequestModel.h"
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
					/// <summary> * 封装跟预支差旅费申请业务相关的请求数据 </summary>
					/// 
					class PreFeeRequestModel : public RequestModel
					{
					///	
					///	 <summary> * 约定具体的业务类型 </summary>
					///	 
					public:
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static const std::string FEE_TYPE = "preFee";
						PreFeeRequestModel();
					///	
					///	 <summary> * 申请人 </summary>
					///	 
					private:
						std::string user;
					///	
					///	 <summary> * 申请金额 </summary>
					///	 
						double fee;
					public:
						virtual std::string getUser();
						virtual void setUser(std::string user);
						virtual double getFee();
						virtual void setFee(double fee);
					};

				}
			}
		}
	}
}