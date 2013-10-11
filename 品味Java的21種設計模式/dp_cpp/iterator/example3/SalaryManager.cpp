#include "SalaryManager.h"

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

					PayModel *SalaryManager::getPays()
					{
						return pms;
					}

					void SalaryManager::calcSalary()
					{
						//计算工资，并把工资信息填充到工资列表里面
						//为了测试，做点假数据进去
						PayModel *pm1 = new PayModel();
						pm1->setPay(2200);
						pm1->setUserName("王五");

						PayModel *pm2 = new PayModel();
						pm2->setPay(3600);
						pm2->setUserName("赵六");

						pms = new PayModel[2];
						pms[0] = pm1;
						pms[1] = pm2;
					}

					Iterator *SalaryManager::createIterator()
					{
						return new ArrayIteratorImpl(this);
					}

					object *SalaryManager::get(int index)
					{
						object *retObj = 0;
						if(index < sizeof(pms) / sizeof(pms[0]))
						{
							retObj = pms[index];
						}
						return retObj;
					}

					int SalaryManager::size()
					{
						return sizeof(this->pms) / sizeof(this->pms[0]);
					}
				}
			}
		}
	}
}