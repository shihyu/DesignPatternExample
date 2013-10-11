#include "SecurityMgr.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example1
				{

					SecurityMgr::SecurityMgr()
					{
					InitializeInstanceFields();
					}

					SecurityMgr *SecurityMgr::getInstance()
					{
						return securityMgr;
					}

					void SecurityMgr::login(std::string user)
					{
						//登录的时候就需要把该用户所拥有的权限，从数据库中取出来，放到缓存中去
						Collection<AuthorizationModel*> *col = queryByUser(user);
						map->put(user, col);
					}

					bool SecurityMgr::hasPermit(std::string user, std::string securityEntity, std::string permit)
					{
						Collection<AuthorizationModel*> *col = map->get(user);
						if(col==0 || col->size() == 0)
						{
							puts(user+"没有登录或是没有被分配任何权限");
							return false;
						}
						for (Collection<AuthorizationModel*>::const_iterator am = col->begin(); am != col->end(); ++am)
						{
							//输出当前实例，看看是否同一个实例对象
							puts("am=="+*am);
							if((*am)->getSecurityEntity()->equals(securityEntity) && (*am)->getPermit()->equals(permit))
							{
								return true;
							}
						}
						return false;
					}

					Collection<AuthorizationModel*> *SecurityMgr::queryByUser(std::string user)
					{
						Collection<AuthorizationModel*> *col = std::vector<AuthorizationModel*>();

						for (Collection<std::string>::const_iterator s = TestDB::colDB->begin(); s != TestDB::colDB->end(); ++s)
						{
//ORIGINAL LINE: String ss[] = s.split(",");
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'split' method:
							std::string *ss = (*s)->split(",");
							if(ss[0].equals(user))
							{
								AuthorizationModel *am = new AuthorizationModel();
								am->setUser(ss[0]);
								am->setSecurityEntity(ss[1]);
								am->setPermit(ss[2]);

								col->add(am);
							}
						}
						return col;
					}
				}
			}
		}
	}
}
