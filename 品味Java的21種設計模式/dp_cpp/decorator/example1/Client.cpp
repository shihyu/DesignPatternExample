#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						//先创建计算奖金的对象
						Prize *p = new Prize();

						//日期对象都没有用上，所以传null就可以了
						double zs = p->calcPrize("张三",0,0);
						puts("==========张三应得奖金："+zs);
						double ls = p->calcPrize("李四",0,0);
						puts("==========李四应得奖金："+ls);
						double ww = p->calcPrize("王五",0,0);
						puts("==========王经理应得奖金："+ww);
					}
				}
			}
		}
	}
}
