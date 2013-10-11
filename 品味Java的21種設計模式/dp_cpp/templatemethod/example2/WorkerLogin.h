#pragma once

#include "LoginModel.h"
#include "WorkerModel.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example2
				{

					///
					/// <summary> * 工作人员登录控制的逻辑处理 </summary>
					/// 
					class WorkerLogin
					{
					///	
					///	 <summary> * 判断登录数据是否正确，也就是是否能登录成功 </summary>
					///	 * <param name="lm"> 封装登录数据的Model </param>
					///	 * <returns> true表示登录成功，false表示登录失败 </returns>
					///	 
					public:
						virtual bool login(LoginModel *lm);
					///	
					///	 <summary> * 对密码数据进行加密 </summary>
					///	 * <param name="pwd"> 密码数据 </param>
					///	 * <returns> 加密后的密码数据 </returns>
					///	 
					private:
						std::string encryptPwd(std::string pwd);
					///	
					///	 <summary> * 根据工作人员编号获取工作人员的详细信息 </summary>
					///	 * <param name="workerId"> 工作人员编号 </param>
					///	 * <returns> 对应的工作人员的详细信息 </returns>
					///	 
						WorkerModel *findWorkerByWorkerId(std::string workerId);
					};

				}
			}
		}
	}
}