#pragma once

#include "SaleHandler.h"
#include "SaleModel.h"
#include <string>

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
					///
					/// <summary> * 真正处理销售的业务功能的职责对象 </summary>
					/// 
					class SaleMgr : public SaleHandler
					{
					public:
						virtual bool sale(std::string user, std::string customer, SaleModel *saleModel);
					};

				}
			}
		}
	}
}