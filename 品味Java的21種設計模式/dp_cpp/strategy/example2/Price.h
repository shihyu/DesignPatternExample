#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example2
				{
					///
					/// <summary> * 价格管理，主要完成计算向客户所报价格的功能 </summary>
					/// 
					class Price
					{
					///	
					///	 <summary> * 报价，对不同类型的，计算不同的价格 </summary>
					///	 * <param name="goodsPrice"> 商品销售原价 </param>
					///	 * <param name="customerType"> 客户类型 </param>
					///	 * <returns> 计算出来的，应该给客户报的价格 </returns>
					///	 
					public:
						virtual double quote(double goodsPrice, std::string customerType);
					///	
					///	 <summary> * 为新客户或者是普通客户计算应报的价格 </summary>
					///	 * <param name="goodsPrice"> 商品销售原价 </param>
					///	 * <returns> 计算出来的，应该给客户报的价格 </returns>
					///	 
					private:
						double calcPriceForNormal(double goodsPrice);
					///	
					///	 <summary> * 为老客户计算应报的价格 </summary>
					///	 * <param name="goodsPrice"> 商品销售原价 </param>
					///	 * <returns> 计算出来的，应该给客户报的价格 </returns>
					///	 
						double calcPriceForOld(double goodsPrice);
					///	
					///	 <summary> * 为大客户计算应报的价格 </summary>
					///	 * <param name="goodsPrice"> 商品销售原价 </param>
					///	 * <returns> 计算出来的，应该给客户报的价格 </returns>
					///	 
						double calcPriceForLarge(double goodsPrice);
					};

				}
			}
		}
	}
}