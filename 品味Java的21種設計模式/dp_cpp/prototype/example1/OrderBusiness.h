#pragma once

#include "OrderApi.h"
#include "PersonalOrder.h"
#include "EnterpriseOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example1
				{
					///
					/// <summary> * 处理订单的业务对象 </summary>
					/// 
					class OrderBusiness
					{
					///	
					///	 <summary> * 创建订单的方法 </summary>
					///	 * <param name="order"> 订单的接口对象 </param>
					///	 
					public:
						virtual void saveOrder(OrderApi *order);

					//	public void saveOrder2(OrderApi order){
					//		int oldNum = order.getOrderProductNum();
					//		while(oldNum > 1000){
					//			//定义一个表示被拆分出来的新订单对象
					//			OrderApi newOrder = null;
					//			
					//			if(order instanceof PersonalOrder){
					//				//创建相应的订单对象
					//				PersonalOrder p2 = new PersonalOrder();
					//				//然后进行赋值等，省略了
					//				//然后再设置给newOrder
					//				newOrder = p2;
					//			}else if(order instanceof EnterpriseOrder){
					//				//创建相应的订单对象
					//				EnterpriseOrder e2 = new EnterpriseOrder();
					//				//然后进行赋值等，省略了
					//				//然后再设置给newOrder
					//				newOrder = e2;
					//			}			
					//			//然后进行拆分和其他业务功能处理，省略了
					//		}		
					//	}
					};

				}
			}
		}
	}
}