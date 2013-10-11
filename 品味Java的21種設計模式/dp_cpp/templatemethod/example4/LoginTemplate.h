#pragma once

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
					/// <summary> *	登录控制的模板 </summary>
					/// 
					class LoginTemplate
					{
					///	
					///	 <summary> * 判断登录数据是否正确，也就是是否能登录成功 </summary>
					///	 * <param name="lm"> 封装登录数据的Model </param>
					///	 * <returns> true表示登录成功，false表示登录失败 </returns>
					///	 
					public:
						bool login(LoginModel *lm);
					///	
					///	 <summary> * 根据登录编号来查找和获取存储中相应的数据 </summary>
					///	 * <param name="loginId"> 登录编号 </param>
					///	 * <returns> 登录编号在存储中相对应的数据 </returns>
					///	 
						virtual LoginModel *findLoginUser(std::string loginId) = 0;
					///	
					///	 <summary> * 对密码数据进行加密 </summary>
					///	 * <param name="pwd"> 密码数据 </param>
					///	 * <returns> 加密后的密码数据 </returns>
					///	 
						virtual std::string encryptPwd(std::string pwd);
					///	
					///	 <summary> * 判断用户填写的登录数据和存储中对应的数据是否匹配得上 </summary>
					///	 * <param name="lm"> 用户填写的登录数据 </param>
					///	 * <param name="dbLm"> 在存储中对应的数据 </param>
					///	 * <returns> true表示匹配成功，false表示匹配失败 </returns>
					///	 
						virtual bool match(LoginModel *lm, LoginModel *dbLm);
					};

				}
			}
		}
	}
}