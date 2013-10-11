#pragma once

#include "InsuranceContract.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example4
				{
					///
					/// <summary> * 构造保险合同对象的构建器 </summary>
					/// 
					class ConcreteBuilder
					{
					private:
						std::string contractId;
						std::string personName;
						std::string companyName;
						long long beginDate;
						long long endDate;
						std::string otherData;
					///	
					///	 <summary> * 构造方法，传入必须要有的参数 </summary>
					///	 * <param name="contractId"> 保险合同编号 </param>
					///	 * <param name="beginDate"> 保险开始生效的日期 </param>
					///	 * <param name="endDate"> 保险失效的日期 </param>
					///	 
					public:
						ConcreteBuilder(std::string contractId, long long beginDate, long long endDate);
					///	
					///	 <summary> * 选填数据，被保险人员的名称 </summary>
					///	 * <param name="personName">  被保险人员的名称 </param>
					///	 * <returns> 构建器对象 </returns>
					///	 
						virtual ConcreteBuilder *setPersonName(std::string personName);
					///	
					///	 <summary> *  选填数据，被保险公司的名称 </summary>
					///	 * <param name="companyName"> 被保险公司的名称 </param>
					///	 * <returns> 构建器对象 </returns>
					///	 
						virtual ConcreteBuilder *setCompanyName(std::string companyName);
					///	
					///	 <summary> * 选填数据，其它数据 </summary>
					///	 * <param name="otherData"> 其它数据 </param>
					///	 * <returns> 构建器对象 </returns>
					///	 
						virtual ConcreteBuilder *setOtherData(std::string otherData);
					///	
					///	 <summary> * 构建真正的对象并返回 </summary>
					///	 * <returns> 构建的保险合同的对象 </returns>
					///	 
						virtual InsuranceContract *build();

						virtual std::string getContractId();

						virtual std::string getPersonName();

						virtual std::string getCompanyName();

						virtual long long getBeginDate();

						virtual long long getEndDate();

						virtual std::string getOtherData();
					};

				}
			}
		}
	}
}