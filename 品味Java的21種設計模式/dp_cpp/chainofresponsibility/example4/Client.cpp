#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//先要组装职责链		
						Handler *h1 = new GeneralManager();
						Handler *h2 = new DepManager();
						Handler *h3 = new ProjectManager();
						h3->setSuccessor(h2);
						h2->setSuccessor(h1);

						//开始测试申请聚餐费用
						std::string ret1 = h3->handleFeeRequest("小李", 300);
						puts("the ret1="+ret1);
						std::string ret2 = h3->handleFeeRequest("小李", 600);
						puts("the ret2="+ret2);
						std::string ret3 = h3->handleFeeRequest("小李", 1200);
						puts("the ret3="+ret3);

						//开始测试申请差旅费用
						h3->handlePreFeeRequest("小张", 3000);
						h3->handlePreFeeRequest("小张", 6000);
						h3->handlePreFeeRequest("小张", 32000);
					}
				}
			}
		}
	}
}