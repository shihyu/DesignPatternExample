#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example4
				{


					///
					/// <summary> * 订单的接口，声明了可以克隆自身的方法 </summary>
					/// 
					class OrderApi
					{
					///	
					///	 <summary> * 获取订单产品数量 </summary>
					///	 * <returns> 订单中产品数量 </returns>
					///	 
					public:
						virtual public int getOrderProductNum() = 0;
					///	
					///	 <summary> * 设置订单产品数量 </summary>
					///	 * <param name="num"> 订单产品数量 </param>
					///	 
						virtual public void setOrderProductNum(int) = 0;
					///	
					///	 <summary> * 克隆方法 </summary>
					///	 * <returns> 订单原型的实例 </returns>
					///	 
						virtual public OrderApi *cloneOrder() = 0;
					};

				}
			}
		}
	}
}