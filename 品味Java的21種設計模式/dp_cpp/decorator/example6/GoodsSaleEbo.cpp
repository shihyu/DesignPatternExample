#include "GoodsSaleEbo.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example6
				{

					bool GoodsSaleEbo::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						puts(user+"保存了"+customer+"购买 "+saleModel+" 的销售数据");
						return true;
					}
				}
			}
		}
	}
}
