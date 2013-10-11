#pragma once

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
					/// <summary> * 策略，定义计算报价算法的接口 </summary>
					/// 
					class Strategy
					{
					///	
					///	 <summary> * 计算应报的价格 </summary>
					///	 * <param name="goodsPrice"> 商品销售原价 </param>
					///	 * <returns> 计算出来的，应该给客户报的价格 </returns>
					///	 
					public:
						virtual public double calcPrice(double) = 0;
					};


				}
			}
		}
	}
}