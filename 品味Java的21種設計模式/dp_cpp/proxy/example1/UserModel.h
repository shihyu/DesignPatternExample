#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example1
				{
					///
					/// <summary> * 描述用户数据的对象 </summary>
					/// 
					class UserModel
					{
					///	
					///	 <summary> * 用户编号 </summary>
					///	 
					private:
						std::string userId;
					///	
					///	 <summary> * 用户姓名 </summary>
					///	 
						std::string name;
					///	
					///	 <summary> * 部门编号 </summary>
					///	 
						std::string depId;
					///	
					///	 <summary> * 性别 </summary>
					///	 
						std::string sex;

					public:
						virtual std::string getUserId();
						virtual void setUserId(std::string userId);
						virtual std::string getName();
						virtual void setName(std::string name);
						virtual std::string getDepId();
						virtual void setDepId(std::string depId);
						virtual std::string getSex();
						virtual void setSex(std::string sex);

						virtual std::string ToString();
					};

				}
			}
		}
	}
}