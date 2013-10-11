#pragma once

#include "UserModelApi.h"
#include "UserModel.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example3
				{


					///
					/// <summary> * 代理对象,代理用户数据对象 </summary>
					/// 
					class Proxy : public UserModelApi
					{
					///	
					///	 <summary> * 持有被代理的具体的目标对象 </summary>
					///	 
					private:
						UserModel *realSubject;
					///	
					///	 <summary> * 构造方法，传入被代理的具体的目标对象 </summary>
					///	 * <param name="realSubject"> 被代理的具体的目标对象 </param>
					///	 
					public:
						Proxy(UserModel *realSubject);
					///	
					///	 <summary> * 标示是否已经重新装载过数据了 </summary>
					///	 
					private:
						bool loaded;


					public:
						virtual std::string getUserId();
						virtual void setUserId(std::string userId);
						virtual std::string getName();
						virtual void setName(std::string name);


						virtual void setDepId(std::string depId);
						virtual void setSex(std::string sex);

						virtual std::string getDepId();
						virtual std::string getSex();

					///	
					///	 <summary> * 重新查询数据库以获取完整的用户数据 </summary>
					///	 
					private:
						void reload();
					public:
						virtual std::string ToString();

					private:
						Connection *getConnection() throw(Exception);
					};

				}
			}
		}
	}
}