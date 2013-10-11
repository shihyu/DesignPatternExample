#include "UserModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example1
				{

					std::string UserModel::getUuid()
					{
						return uuid;
					}

					void UserModel::setUuid(std::string uuid)
					{
						this->uuid = uuid;
					}

					std::string UserModel::getUserId()
					{
						return userId;
					}

					void UserModel::setUserId(std::string userId)
					{
						this->userId = userId;
					}

					std::string UserModel::getPwd()
					{
						return pwd;
					}

					void UserModel::setPwd(std::string pwd)
					{
						this->pwd = pwd;
					}

					std::string UserModel::getName()
					{
						return name;
					}

					void UserModel::setName(std::string name)
					{
						this->name = name;
					}
				}
			}
		}
	}
}
