#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example3
				{

					void Client::main(std::string args[]) throw(Exception)
					{
						UserManager *userManager = new UserManager();
						Collection<UserModelApi*> *col = userManager->getUserByDepId("0101");

						//如果只是显示用户名称，那么不需要重新查询数据库
						for (Collection<UserModelApi*>::const_iterator umApi = col->begin(); umApi != col->end(); ++umApi)
						{
							puts("用户编号：="+(*umApi)->getUserId()+",用户姓名：="+(*umApi)->getName());
						}
						//如果访问非用户编号和用户姓名外的属性，那就会重新查询数据库
						for (Collection<UserModelApi*>::const_iterator umApi = col->begin(); umApi != col->end(); ++umApi)
						{
							puts("用户编号：="+(*umApi)->getUserId()+",用户姓名：="+(*umApi)->getName()+",所属部门：="+(*umApi)->getDepId());
						}
					}
				}
			}
		}
	}
}
