#pragma once

#include "LoginTemplate.h"
#include "LoginModel.h"
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
					/// <summary> * 工作人员登录控制的逻辑处理 </summary>
					/// 
					class WorkerLogin : public LoginTemplate
					{

					public:
						virtual LoginModel *findLoginUser(std::string loginId);
						virtual std::string encryptPwd(std::string pwd);
					};

				}
			}
		}
	}
}