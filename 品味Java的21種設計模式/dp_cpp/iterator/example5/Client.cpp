#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//访问集团的工资列表
						PayManager *payManager= new PayManager();
						//先计算再获取
						payManager->calcPay();
						puts("集团工资列表：");
						test(payManager->createIterator());
						//访问新收购公司的工资列表
						SalaryManager *salaryManager = new SalaryManager();
						//先计算再获取
						salaryManager->calcSalary();
						puts("新收购的公司工资列表：");
						test(salaryManager->createIterator());
					}

					void Client::test(Iterator *it)
					{
						while(it->hasNext())
						{
							PayModel *pm = static_cast<PayModel*>(it->next());
							puts(pm);
							it++;
						}
					}
				}
			}
		}
	}
}
