#include "SecurityMgr.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example3
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
						Collection<Flyweight*> *col = queryByUser(user);
						map->put(user, col);
					}

					bool SecurityMgr::hasPermit(std::string user, std::string securityEntity, std::string permit)
					{
						Collection<Flyweight*> *col = map->get(user);
						if(col==0 || col->size() == 0)
						{
							puts(user+"没有登录或是没有被分配任何权限");
							return false;
						}
						for (Collection<Flyweight*>::const_iterator fm = col->begin(); fm != col->end(); ++fm)
						{
							//输出当前实例，看看是否同一个实例对象
							puts("fm=="+*fm);
							if((*fm)->match(securityEntity, permit))
							{
								return true;
							}
						}
						return false;
					}

					Collection<Flyweight*> *SecurityMgr::queryByUser(std::string user)
					{
						Collection<Flyweight*> *col = std::vector<Flyweight*>();

						for (Collection<std::string>::const_iterator s = TestDB::colDB->begin(); s != TestDB::colDB->end(); ++s)
						{
//ORIGINAL LINE: String ss[] = s.split(",");
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'split' method:
							std::string *ss = (*s)->split(",");
							if(ss[0].equals(user))
							{
								Flyweight *fm = FlyweightFactory::getInstance()->getFlyweight(ss[1]+","+ss[2]);

								col->add(fm);
							}
						}
						return col;
					}
				}
			}
		}
	}
}