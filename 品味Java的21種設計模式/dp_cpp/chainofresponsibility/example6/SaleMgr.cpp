#include "SaleMgr.h"

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

					bool SaleMgr::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//进行真正的业务逻辑处理
						puts(user+"保存了"+customer+"购买 "+saleModel+" 的销售数据");
						return true;
					}
				}
			}
		}
	}
}