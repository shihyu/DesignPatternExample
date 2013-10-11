#include "SecurityMgr.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example5
				{

					SecurityMgr::SecurityMgr()
					{
					}

					SecurityMgr *SecurityMgr::getInstance()
					{
						return securityMgr;
					}

					bool SecurityMgr::hasPermit(std::string user, std::string securityEntity, std::string permit)
					{
						Collection<Flyweight*> *col = this->queryByUser(user);
						if(col==0 || col->size() == 0)
						{
							puts(user+"没有登录或是没有被分配任何权限");
							return false;
						}
						for (Collection<Flyweight*>::const_iterator fm = col->begin(); fm != col->end(); ++fm)
						{
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
								Flyweight *fm = 0;
								if(ss[3].equals("2"))
								{
									//表示是组合
									fm = new UnsharedConcreteFlyweight();
									//获取需要组合的数据
//ORIGINAL LINE: String tempSs[] = TestDB.mapDB.get(ss[1]);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
									std::string *tempSs = TestDB::mapDB->get(ss[1]);
									for (std::string::const_iterator tempS = tempSs->begin(); tempS != tempSs->end(); ++tempS)
									{
										Flyweight *tempFm = FlyweightFactory::getInstance()->getFlyweight(*tempS);
										//把这个对象加入到组合对象中
										fm->add(tempFm);
									}
								}
								else
								{
									fm = FlyweightFactory::getInstance()->getFlyweight(ss[1]+","+ss[2]);
								}

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