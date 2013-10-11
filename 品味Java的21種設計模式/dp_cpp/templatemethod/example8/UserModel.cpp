#include "UserModel.h"

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

					UserModel::UserModel(std::string userId, std::string name, int age)
					{
						this->userId = userId;
						this->name = name;
						this->age = age;
					}

					std::string UserModel::getUserId()
					{
						return userId;
					}

					std::string UserModel::getName()
					{
						return name;
					}

					int UserModel::getAge()
					{
						return age;
					}

					std::string UserModel::ToString()
					{
						return "userId="+userId+",name="+name+",age="+age;
					}
				}
			}
		}
	}
}