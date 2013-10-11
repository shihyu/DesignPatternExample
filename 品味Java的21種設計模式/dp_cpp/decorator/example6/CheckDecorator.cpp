#include "CheckDecorator.h"

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

					CheckDecorator::CheckDecorator(GoodsSaleEbi *ebi) : Decorator(ebi)
					{
					}

					bool CheckDecorator::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//简单点，只让张三执行这个功能
						if(!(new std::string("张三"))->equals(user))
						{
							puts("对不起"+user+"，你没有保存销售单的权限");
							//就不再调用被装饰对象的功能了
							return false;
						}
						else
						{
							return this->ebi->sale(user, customer, saleModel);
						}
					}
				}
			}
		}
	}
}