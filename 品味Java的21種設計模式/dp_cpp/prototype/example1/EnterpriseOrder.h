#pragma once

#include "OrderApi.h"
#include <string>

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
					/// <summary> * 企业订单对象 </summary>
					/// 
					class EnterpriseOrder : public OrderApi
					{
					///	
					///	 <summary> * 企业名称 </summary>
					///	 
					private:
						std::string enterpriseName;
					///	
					///	 <summary> * 产品编号 </summary>
					///	 
						std::string productId;
					///	
					///	 <summary> * 订单产品数量 </summary>
					///	 
						int orderProductNum;
					public:
						virtual int getOrderProductNum();
						virtual void setOrderProductNum(int num);
						virtual std::string getEnterpriseName();
						virtual void setEnterpriseName(std::string enterpriseName);
						virtual std::string getProductId();
						virtual void setProductId(std::string productId);
						virtual std::string ToString();
					};

				}
			}
		}
	}
}