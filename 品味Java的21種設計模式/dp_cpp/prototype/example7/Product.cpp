#include "Product.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example7
				{

					std::string Product::getName()
					{
						return name;
					}

					void Product::setName(std::string name)
					{
						this->name = name;
					}

					std::string Product::getProductId()
					{
						return productId;
					}

					void Product::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					std::string Product::ToString()
					{
						return "产品编号="+this->productId+"，产品名称="+this->name;
					}

					object *Product::clone()
					{
						object *obj = 0;
						try
						{
							obj = __super::clone();
						}
						catch (CloneNotSupportedException *e)
						{
							e->printStackTrace();
						}
						return obj;
					}
				}
			}
		}
	}
}