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
					/// <summary> * 普通用户登录控制的逻辑处理 </summary>
					/// 
					class NormalLogin : public LoginTemplate
					{
					public:
						virtual LoginModel *findLoginUser(std::string loginId);
					};

				}
			}
		}
	}
}