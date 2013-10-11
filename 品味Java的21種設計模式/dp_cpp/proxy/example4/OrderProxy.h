#pragma once

#include "OrderApi.h"
#include "Order.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example4
				{

					///
					/// <summary> * 订单的代理对象 </summary>
					/// 
					class OrderProxy : public OrderApi
					{
					///	
					///	 <summary> * 持有被代理的具体的目标对象 </summary>
					///	 
					private:
						Order *order;
					///	
					///	 <summary> * 构造方法，传入被代理的具体的目标对象 </summary>
					///	 * <param name="realSubject"> 被代理的具体的目标对象 </param>
					///	 
					public:
						OrderProxy(Order *realSubject);
						virtual void setProductName(std::string productName, std::string user);
						virtual void setOrderNum(int orderNum, std::string user);
						virtual void setOrderUser(std::string orderUser, std::string user);
						virtual int getOrderNum();
						virtual std::string getOrderUser();
						virtual std::string getProductName();
						virtual std::string ToString();
					};

				}
			}
		}
	}
}