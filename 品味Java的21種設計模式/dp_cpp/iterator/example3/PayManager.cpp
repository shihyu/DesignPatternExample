#include "PayManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example3
				{

					std::vector PayManager::getPayList()
					{
						return list;
					}

					void PayManager::calcPay()
					{
						//计算工资，并把工资信息填充到工资列表里面
						//为了测试，做点假数据进去
						PayModel *pm1 = new PayModel();
						pm1->setPay(3800);
						pm1->setUserName("张三");

						PayModel *pm2 = new PayModel();
						pm2->setPay(5800);
						pm2->setUserName("李四");

						list.push_back(pm1);
						list.push_back(pm2);
					}

					Iterator *PayManager::createIterator()
					{
						return new CollectionIteratorImpl(this);
					}

					object *PayManager::get(int index)
					{
						object *retObj = 0;
						if(index < this->list.size())
						{
							retObj = this->list.at(index);
						}
						return retObj;
					}

					int PayManager::size()
					{
						return this->list.size();
					}
				}
			}
		}
	}
}