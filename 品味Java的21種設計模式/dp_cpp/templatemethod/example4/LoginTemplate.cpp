#include "LoginTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example4
				{

					bool LoginTemplate::login(LoginModel *lm)
					{
						//1：根据登录人员的编号去获取相应的数据
						LoginModel *dbLm = this->findLoginUser(lm->getLoginId());
						if(dbLm!=0)
						{
							//2：对密码进行加密
							std::string encryptPwd = this->encryptPwd(lm->getPwd());
							//把加密后的密码设置回到登录数据模型里面
							lm->setPwd(encryptPwd);
							//3：判断是否匹配
							return this->match(lm, dbLm);
						}
						return false;
					}

					std::string LoginTemplate::encryptPwd(std::string pwd)
					{
						return pwd;
					}

					bool LoginTemplate::match(LoginModel *lm, LoginModel *dbLm)
					{
						if(lm->getLoginId().equals(dbLm->getLoginId()) && lm->getPwd().equals(dbLm->getPwd()))
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}
