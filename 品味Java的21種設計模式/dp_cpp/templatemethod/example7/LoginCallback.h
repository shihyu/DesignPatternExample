#pragma once

#include "LoginModel.h"
#include "LoginTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example7
				{
					///
					/// <summary> * 登录控制的模板方法需要的回调接口，
					/// * 需要尽可能的把所有需要的接口方法都定义出来,
					/// * 或者说是所有可以被扩展的方法都需要被定义出来 </summary>
					/// 
					class LoginCallback
					{
					///	
					///	 <summary> * 根据登录编号来查找和获取存储中相应的数据 </summary>
					///	 * <param name="loginId"> 登录编号 </param>
					///	 * <returns> 登录编号在存储中相对应的数据 </returns>
					///	 
					public:
						virtual public LoginModel *findLoginUser(std::string) = 0;
					///	
					///	 <summary> * 对密码数据进行加密 </summary>
					///	 * <param name="pwd"> 密码数据 </param>
					///	 * <param name="template"> LoginTemplate对象，通过它来调用在
					///	 * 				LoginTemplate中定义的公共方法或缺省实现 </param>
					///	 * <returns> 加密后的密码数据 </returns>
					///	 
						virtual public std::string encryptPwd(std::string, LoginTemplate*) = 0;
					///	
					///	 <summary> * 判断用户填写的登录数据和存储中对应的数据是否匹配得上 </summary>
					///	 * <param name="lm"> 用户填写的登录数据 </param>
					///	 * <param name="dbLm"> 在存储中对应的数据 </param>
					///	 * <param name="template"> LoginTemplate对象，通过它来调用在
					///	 * 				LoginTemplate中定义的公共方法或缺省实现 </param>
					///	 * <returns> true表示匹配成功，false表示匹配失败 </returns>
					///	 
						virtual public bool match(LoginModel*, LoginModel*, LoginTemplate*) = 0;
					};

				}
			}
		}
	}
}