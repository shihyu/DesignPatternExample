#include "SalaryManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example8
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

						PayModel *pm3 = new PayModel();
						pm3->setPay(2200);
						pm3->setUserName("王五二号");

						PayModel *pm4 = new PayModel();
						pm4->setPay(3600);
						pm4->setUserName("赵六二号");

						PayModel *pm5 = new PayModel();
						pm5->setPay(2200);
						pm5->setUserName("王五三号");

						pms = new PayModel[5];
						pms[0] = pm1;
						pms[1] = pm2;
						pms[2] = pm3;
						pms[3] = pm4;
						pms[4] = pm5;
					}

					AggregationIterator *SalaryManager::createIterator()
					{
						return new ArrayIteratorImpl(this);
					}
				}
			}
		}
	}
}