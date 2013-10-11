#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//访问新收购公司的工资列表
						SalaryManager *salaryManager = new SalaryManager();
						//先计算再获取
						salaryManager->calcSalary();
						//得到翻页迭代器
						AggregationIterator *it = salaryManager->createIterator();

						//获取第一页，每页显示2条
						Collection *col = it->next(2);
						puts("第一页数据：");
						print(col);
						//获取第二页，每页显示2条
						Collection *col2 = it->next(2);
						puts("第二页数据：");
						print(col2);
						//向前一页，也就是再次获取第二页
						Collection *col3 = it->previous(2);
						puts("再次获取第二页数据：");
						print(col3);
					}

					void Client::print(Collection *col)
					{
						Collection::const_iterator it = col->begin();
						while(it != col->end())
						{
							object *obj = *it;
							puts(obj);
							it++;
						}
					}
				}
			}
		}
	}
}
