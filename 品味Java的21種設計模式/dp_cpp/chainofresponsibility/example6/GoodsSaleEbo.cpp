#include "GoodsSaleEbo.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example6
				{

					bool GoodsSaleEbo::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//如果全部在这里处理，基本的顺序是
						//1：权限检查
						//2：通用数据检查（这个也可能在表现层已经作过了）
						//3：数据逻辑校验

						//4：真正的业务处理

						//但是现在通过功能链来做，这里就主要负责构建链
						SaleSecurityCheck *ssc = new SaleSecurityCheck();
						SaleDataCheck *sdc = new SaleDataCheck();
						SaleLogicCheck *slc = new SaleLogicCheck();
						SaleMgr *sd = new SaleMgr();
						ssc->setSuccessor(sdc);
						sdc->setSuccessor(slc);
						slc->setSuccessor(sd);
						//向链上的第一个对象发出处理的请求
						return ssc->sale(user, customer, saleModel);
					}
				}
			}
		}
	}
}