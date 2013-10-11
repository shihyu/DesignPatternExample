#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example1
				{
					///
					/// <summary> * 描述授权数据的数据model </summary>
					/// 
					class AuthorizationModel
					{
					///	
					///	 <summary> * 人员 </summary>
					///	 
					private:
						std::string user;
					///	
					///	 <summary> * 安全实体 </summary>
					///	 
						std::string securityEntity;
					///	
					///	 <summary> * 权限 </summary>
					///	 
						std::string permit;

					public:
						virtual std::string getUser();
						virtual void setUser(std::string user);
						virtual std::string getSecurityEntity();
						virtual void setSecurityEntity(std::string securityEntity);
						virtual std::string getPermit();
						virtual void setPermit(std::string permit);

					};

				}
			}
		}
	}
}