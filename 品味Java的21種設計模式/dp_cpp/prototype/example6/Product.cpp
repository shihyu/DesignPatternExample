#include "Product.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example6
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

					ProductPrototype *Product::cloneProduct()
					{
						//创建一个新的订单，然后把本实例的数据复制过去
						Product *product = new Product();
						product->setProductId(this->productId);
						product->setName(this->name);
						return product;
					}
				}
			}
		}
	}
}