#include "LoginModel.h"

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

					std::string LoginModel::getUserId()
					{
						return userId;
					}

					void LoginModel::setUserId(std::string userId)
					{
						this->userId = userId;
					}

					std::string LoginModel::getPwd()
					{
						return pwd;
					}

					void LoginModel::setPwd(std::string pwd)
					{
						this->pwd = pwd;
					}
				}
			}
		}
	}
}
