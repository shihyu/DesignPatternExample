#include "ExportDataModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example1
				{

					std::string ExportDataModel::getProductId()
					{
						return productId;
					}

					void ExportDataModel::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					double ExportDataModel::getPrice()
					{
						return price;
					}

					void ExportDataModel::setPrice(double price)
					{
						this->price = price;
					}

					double ExportDataModel::getAmount()
					{
						return amount;
					}

					void ExportDataModel::setAmount(double amount)
					{
						this->amount = amount;
					}
				}
			}
		}
	}
}
