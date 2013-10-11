#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example1
				{
					///
					/// <summary> * 各种客户的父类 </summary>
					/// 
					class Customer
					{
					///	
					///	 <summary> * 客户编号 </summary>
					///	 
					private:
						std::string customerId;
					///	
					///	 <summary> * 客户名称 </summary>
					///	 
						std::string name;

					public:
						virtual std::string getCustomerId();
						virtual void setCustomerId(std::string customerId);
						virtual std::string getName();
						virtual void setName(std::string name);
					///	
					///	 <summary> * 客户提出服务请求的方法，示意一下 </summary>
					///	 
						virtual void serviceRequest() = 0;
					};

				}
			}
		}
	}
}