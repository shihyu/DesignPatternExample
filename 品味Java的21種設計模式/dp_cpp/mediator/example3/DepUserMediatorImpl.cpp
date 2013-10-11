#include "DepUserMediatorImpl.h"

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

					DepUserMediatorImpl::DepUserMediatorImpl()
					{
						//调用初始化测试数据的功能
						InitializeInstanceFields();
						initTestData();
					}

					DepUserMediatorImpl *DepUserMediatorImpl::getInstance()
					{
						return mediator;
					}

					void DepUserMediatorImpl::initTestData()
					{
						//准备一些测试数据
						DepUserModel *du1 = new DepUserModel();
						du1->setDepUserId("du1");
						du1->setDepId("d1");
						du1->setUserId("u1");
						depUserCol->add(du1);

						DepUserModel *du2 = new DepUserModel();
						du2->setDepUserId("du2");
						du2->setDepId("d1");
						du2->setUserId("u2");
						depUserCol->add(du2);

						DepUserModel *du3 = new DepUserModel();
						du3->setDepUserId("du3");
						du3->setDepId("d2");
						du3->setUserId("u3");
						depUserCol->add(du3);

						DepUserModel *du4 = new DepUserModel();
						du4->setDepUserId("du4");
						du4->setDepId("d2");
						du4->setUserId("u4");
						depUserCol->add(du4);

						DepUserModel *du5 = new DepUserModel();
						du5->setDepUserId("du5");
						du5->setDepId("d2");
						du5->setUserId("u1");
						depUserCol->add(du5);
					}

					bool DepUserMediatorImpl::deleteDep(std::string depId)
					{
						//请注意：为了演示简单，部门撤销后，原部门的人员怎么处理等后续业务处理，这里就不管了

						//1：到记录部门和人员关系的集合里面，寻找跟这个部门相关的人员
						//设置一个临时的集合，记录需要清除的关系对象
						Collection<DepUserModel*> *tempCol = std::vector<DepUserModel*>();
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getDepId()->equals(depId))
							{
								//2：需要把这个相关的记录去掉，先记录下来
								tempCol->add(*du);
							}
						}
						//3：从关系集合里面清除掉这些关系
						depUserCol->removeAll(tempCol);

						return true;
					}

					bool DepUserMediatorImpl::deleteUser(std::string userId)
					{
						//1：到记录部门和人员关系的集合里面，寻找跟这个人员相关的部门
						//设置一个临时的集合，记录需要清除的关系对象
						Collection<DepUserModel*> *tempCol = std::vector<DepUserModel*>();
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getUserId()->equals(userId))
							{
								//2：需要把这个相关的记录去掉，先记录下来
								tempCol->add(*du);
							}
						}
						//3：从关系集合里面清除掉这些关系
						depUserCol->removeAll(tempCol);

						return true;
					}

					void DepUserMediatorImpl::showDepUsers(Dep *dep)
					{
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getDepId()->equals(dep->getDepId()))
							{
								puts("部门编号="+dep->getDepId()+"下面拥有人员，其编号是："+(*du)->getUserId());
							}
						}
					}

					void DepUserMediatorImpl::showUserDeps(User *user)
					{
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getUserId()->equals(user->getUserId()))
							{
								puts("人员编号="+user->getUserId()+"属于部门编号是："+(*du)->getDepId());
							}
						}
					}

					bool DepUserMediatorImpl::changeDep(std::string userId, std::string oldDepId, std::string newDepId)
					{
						//本示例不去实现了
						return false;
					}

					bool DepUserMediatorImpl::joinDep(Collection<std::string> *colDepIds, Dep *newDep)
					{
						//本示例不去实现了		
						return false;
					}
				}
			}
		}
	}
}
