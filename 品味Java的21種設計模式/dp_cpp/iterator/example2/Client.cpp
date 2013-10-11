#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//访问集团的工资列表
						PayManager *payManager= new PayManager();
						//先计算再获取
						payManager->calcPay();
						Collection *payList = payManager->getPayList();
						Collection::const_iterator it = payList->begin();
						puts("集团工资列表：");
						while(it != payList->end())
						{
							PayModel *pm = static_cast<PayModel*>(*it);
							puts(pm);
							it++;
						}

						//访问新收购公司的工资列表
						SalaryManager *salaryManager = new SalaryManager();
						//先计算再获取
						salaryManager->calcSalary();
//ORIGINAL LINE: PayModel[] pms = salaryManager.getPays();
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						PayModel *pms = salaryManager->getPays();
						puts("新收购的公司工资列表：");
						for(int i=0;i<sizeof(pms) / sizeof(pms[0]);i++)
						{
							puts(pms[i]);
						}
					}
				}
			}
		}
	}
}