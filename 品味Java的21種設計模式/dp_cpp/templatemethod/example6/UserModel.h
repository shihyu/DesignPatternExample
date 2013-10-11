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
				namespace example6
				{
					///
					/// <summary> * 描述用户的数据模型 </summary>
					/// 
					class UserModel
					{
					private:
						std::string uuid;
						std::string name;
						int age;
					public:
						virtual std::string getUuid();
						virtual void setUuid(std::string uuid);
						virtual std::string getName();
						virtual void setName(std::string name);
						virtual int getAge();
						virtual void setAge(int age);
						virtual std::string ToString();
					};

				}
			}
		}
	}
}