#pragma once

#include "Aggregate.h"
#include "PayModel.h"
#include "Iterator.h"
#include "CollectionIteratorImpl.h"
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example3
				{

					///
					/// <summary> * 客户方已有的工资管理对象 </summary>
					/// 
					class PayManager : public Aggregate
					{
					///	
					///	 <summary> * 聚合对象，这里是Java的集合对象 </summary>
					///	 
					private:
						std::vector list;
					///	
					///	 <summary> * 获取工资列表 </summary>
					///	 * <returns> 工资列表 </returns>
					///	 
					public:
						virtual std::vector getPayList();
					///	
					///	 <summary> * 计算工资，其实应该有很多参数，为了演示从简 </summary>
					///	 
						virtual void calcPay();

						virtual Iterator *createIterator();
						virtual object *get(int index);
						virtual int size();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								list = std::vector();

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