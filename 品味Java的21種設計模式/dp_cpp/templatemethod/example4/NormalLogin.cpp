#include "NormalLogin.h"

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

					LoginModel *NormalLogin::findLoginUser(std::string loginId)
					{
						// 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
						LoginModel *lm = new LoginModel();
						lm->setLoginId(loginId);
						lm->setPwd("testpwd");
						return lm;
					}
				}
			}
		}
	}
}