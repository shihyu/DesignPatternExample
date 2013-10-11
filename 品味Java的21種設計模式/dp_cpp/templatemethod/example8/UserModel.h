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
				namespace example8
				{
					///
					/// <summary> * 用户数据模型 </summary>
					/// 
					class UserModel
					{
					private:
						std::string userId, name;
						int age;
					public:
						UserModel(std::string userId, std::string name, int age);
						virtual std::string getUserId();
						virtual std::string getName();
						virtual int getAge();
						virtual std::string ToString();
					};

				}
			}
		}
	}
}