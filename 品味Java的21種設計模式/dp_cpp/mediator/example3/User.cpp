#include "User.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example3
				{

					std::string User::getUserId()
					{
						return userId;
					}

					void User::setUserId(std::string userId)
					{
						this->userId = userId;
					}

					std::string User::getUserName()
					{
						return userName;
					}

					void User::setUserName(std::string userName)
					{
						this->userName = userName;
					}

					bool User::dimission()
					{
						//1：要先通过中介者去清除掉所有与这个人员相关的部门和人员的关系
						DepUserMediatorImpl *mediator = DepUserMediatorImpl::getInstance();
						mediator->deleteUser(userId);
						//2：然后才能真的清除掉这个人员
						//请注意，实际开发中，人员离职，是不会真的删除人员记录的，
						//通常是把人员记录的状态或者是删除标记设置成已删除，
						//只是不再参加新的业务，但是已经发生的业务记录是不会被清除掉的

						return true;
					}
				}
			}
		}
	}
}