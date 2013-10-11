#include "LoginModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example7
				{

					std::string LoginModel::getLoginId()
					{
						return loginId;
					}

					void LoginModel::setLoginId(std::string loginId)
					{
						this->loginId = loginId;
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
