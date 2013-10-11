#pragma once

#include "SaleModel.h"
#include "SaleSecurityCheck.h"
#include "SaleDataCheck.h"
#include "SaleLogicCheck.h"
#include "SaleMgr.h"
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
					/// <summary> * 商品销售管理模块的业务处理 </summary>
					/// 
					class GoodsSaleEbo
					{
					///	
					///	 <summary> * 保存销售信息，本来销售数据应该是多条，太麻烦了，为了演示，简单点 </summary>
					///	 * <param name="user"> 操作人员 </param>
					///	 * <param name="customer"> 客户 </param>
					///	 * <param name="saleModel"> 销售数据 </param>
					///	 * <returns> 是否保存成功 </returns>
					///	 
					public:
						virtual bool sale(std::string user, std::string customer, SaleModel *saleModel);
					};

				}
			}
		}
	}
}