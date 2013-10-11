#include "SaleSecurityCheck.h"

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

					bool SaleSecurityCheck::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//进行权限检查，简单点，就小李能通过
						if((new std::string("小李"))->equals(user))
						{
							return this->successor->sale(user, customer, saleModel);
						}
						else
						{
							puts("对不起"+user+"，你没有保存销售信息的权限");
							return false;
						}
					}
				}
			}
		}
	}
}