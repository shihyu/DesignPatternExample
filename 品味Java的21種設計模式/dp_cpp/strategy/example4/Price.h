#pragma once

#include "Strategy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example4
				{
					///
					/// <summary> * 价格管理，主要完成计算向客户所报价格的功能 </summary>
					/// 
					class Price
					{
					///	
					///	 <summary> * 持有一个具体的策略对象 </summary>
					///	 
					private:
						Strategy *strategy;
					///	
					///	 <summary> * 构造方法，传入一个具体的策略对象 </summary>
					///	 * <param name="aStrategy"> 具体的策略对象 </param>
					///	 
					public:
						Price(Strategy *aStrategy);
					///	
					///	 <summary> * 报价，计算对客户的报价 </summary>
					///	 * <param name="goodsPrice"> 商品销售原价 </param>
					///	 * <returns> 计算出来的，应该给客户报的价格 </returns>
					///	 
						virtual double quote(double goodsPrice);
					};

				}
			}
		}
	}
}