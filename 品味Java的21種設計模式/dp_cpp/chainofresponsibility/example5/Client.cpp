#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//先要组装职责链		
						Handler *h1 = new GeneralManager2();
						Handler *h2 = new DepManager2();
						Handler *h3 = new ProjectManager2();
						h3->setSuccessor(h2);
						h2->setSuccessor(h1);

						//开始测试申请聚餐费用
						FeeRequestModel *frm = new FeeRequestModel();
						frm->setFee(300);
						frm->setUser("小李");
						//调用处理
						std::string ret1 = static_cast<std::string>(h3->handleRequest(frm));
						puts("ret1="+ret1);

						//重新设置申请金额，再调用处理
						frm->setFee(800);
						h3->handleRequest(frm);
						std::string ret2 = static_cast<std::string>(h3->handleRequest(frm));
						puts("ret2="+ret2);

						//重新设置申请金额，再调用处理
						frm->setFee(1600);
						h3->handleRequest(frm);
						std::string ret3 = static_cast<std::string>(h3->handleRequest(frm));
						puts("ret3="+ret3);

						//开始测试申请预支差旅费用
						PreFeeRequestModel *pfrm = new PreFeeRequestModel();
						pfrm->setFee(3000);
						pfrm->setUser("小张");
						//调用处理
						h3->handleRequest(pfrm);
						//重新设置申请金额，再调用处理
						pfrm->setFee(6000);
						h3->handleRequest(pfrm);
						//重新设置申请金额，再调用处理
						pfrm->setFee(36000);
						h3->handleRequest(pfrm);
					}
				}
			}
		}
	}
}
