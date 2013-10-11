#pragma once

#include "DepUserMediatorImpl.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example3
				{

					///
					/// <summary> * 人员类 </summary>
					/// 
					class User
					{
					///	
					///	 <summary> * 人员编号 </summary>
					///	 
					private:
						std::string userId;
					///	
					///	 <summary> * 人员名称 </summary>
					///	 
						std::string userName;
					public:
						virtual std::string getUserId();
						virtual void setUserId(std::string userId);
						virtual std::string getUserName();
						virtual void setUserName(std::string userName);
					///	
					///	 <summary> * 人员离职 </summary>
					///	 * <returns> 是否处理成功 </returns>
					///	 
						virtual bool dimission();
					};

				}
			}
		}
	}
}