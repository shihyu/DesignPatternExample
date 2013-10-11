#pragma once

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
					/// <summary> * 定义职责对象的接口 </summary>
					/// 
					class SaleHandler
					{
					///	
					///	 <summary> * 持有下一个处理请求的对象 </summary>
					///	 
					protected:
						SaleHandler *successor;
					///	
					///	 <summary> * 设置下一个处理请求的对象 </summary>
					///	 * <param name="successor"> 下一个处理请求的对象 </param>
					///	 
					public:
						virtual void setSuccessor(SaleHandler *successor);
					///	
					///	 <summary> * 处理保存销售信息的请求 </summary>
					///	 * <param name="user"> 操作人员 </param>
					///	 * <param name="customer"> 客户 </param>
					///	 * <param name="saleModel"> 销售数据 </param>
					///	 * <returns> 是否处理成功 </returns>
					///	 
						virtual bool sale(std::string user, std::string customer, SaleModel *saleModel) = 0;
					};

				}
			}
		}
	}
}