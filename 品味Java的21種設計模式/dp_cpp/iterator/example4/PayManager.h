#pragma once

#include "PayModel.h"
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example4
				{
					///
					/// <summary> * 客户方已有的工资管理对象 </summary>
					/// 
					class PayManager
					{
					private:
						std::vector<PayModel*> list;
					///	
					///	 <summary> * 获取工资列表 </summary>
					///	 * <returns> 工资列表 </returns>
					///	 
					public:
						virtual std::vector<PayModel*> getPayList();
					///	
					///	 <summary> * 计算工资，其实应该有很多参数，为了演示从简 </summary>
					///	 
						virtual void calcPay();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								list = std::vector<PayModel*>();

								initialized = true;
							}
						}

public:
	PayManager()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}