#pragma once

#include "OrderApi.h"
#include "Order.h"
#include "Proxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example5
				{

					///
					/// <summary> * 使用Java中的动态代理 </summary>
					/// 
					class DynamicProxy : public InvocationHandler
					{
					///	
					///	 <summary> * 被代理的对象 </summary>
					///	 
					private:
						OrderApi *order;
					///	
					///	 <summary> * 获取绑定好代理和具体目标对象后的目标对象的接口 </summary>
					///	 * <param name="order"> 具体的订单对象，相当于具体目标对象 </param>
					///	 * <returns> 绑定好代理和具体目标对象后的目标对象的接口 </returns>
					///	 
					public:
						virtual OrderApi *getProxyInterface(Order *order);

						virtual object *invoke(object *proxy, Method *method, object args[]) throw(Throwable);
					};

				}
			}
		}
	}
}