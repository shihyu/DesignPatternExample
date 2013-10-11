#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example4
				{
					///
					/// <summary> * 封装进行登录控制所需要的数据 </summary>
					/// 
					class LoginModel
					{
					///	
					///	 <summary> * 登录人员的编号，通用的，可能是用户编号，也可能是工作人员编号 </summary>
					///	 
					private:
						std::string loginId;
					///	
					///	 <summary> * 登录的密码 </summary>
					///	 
						std::string pwd;
					public:
						virtual std::string getLoginId();
						virtual void setLoginId(std::string loginId);
						virtual std::string getPwd();
						virtual void setPwd(std::string pwd);
					};

				}
			}
		}
	}
}