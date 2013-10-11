#include "UserModel.h"

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

					std::string UserModel::getUuid()
					{
						return uuid;
					}

					void UserModel::setUuid(std::string uuid)
					{
						this->uuid = uuid;
					}

					std::string UserModel::getName()
					{
						return name;
					}

					void UserModel::setName(std::string name)
					{
						this->name = name;
					}

					int UserModel::getAge()
					{
						return age;
					}

					void UserModel::setAge(int age)
					{
						this->age = age;
					}

					std::string UserModel::ToString()
					{
						return "uuid="+uuid+",name="+name+",age="+age;
					}
				}
			}
		}
	}
}
