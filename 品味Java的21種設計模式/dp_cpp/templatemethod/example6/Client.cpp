#include "Client.h"

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

					void Client::main(std::string args[])
					{
						UserJDBC *uj = new UserJDBC();
						//先新增几条
						UserModel *um1 = new UserModel();
						um1->setUuid("u1");
						um1->setName("张三");
						um1->setAge(22);
						uj->create(um1);

						UserModel *um2 = new UserModel();
						um2->setUuid("u2");
						um2->setName("李四");
						um2->setAge(25);
						uj->create(um2);

						UserModel *um3 = new UserModel();
						um3->setUuid("u3");
						um3->setName("王五");
						um3->setAge(32);
						uj->create(um3);

						//测试修改
						um3->setName("王五被改了");
						um3->setAge(35);
						uj->update(um3);

						//测试查询
						UserQueryModel *uqm = new UserQueryModel();
						uqm->setAge(25);
						uqm->setAge2(36);
						Collection<UserModel*> *col = uj->getByCondition(uqm);
						for (Collection<UserModel*>::const_iterator tempUm = col->begin(); tempUm != col->end(); ++tempUm)
						{
							puts(*tempUm);
						}
					}
				}
			}
		}
	}
}
