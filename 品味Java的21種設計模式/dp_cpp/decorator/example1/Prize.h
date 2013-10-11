#pragma once

#include "TempDB.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example1
				{

					///
					/// <summary> * 计算奖金的对象 </summary>
					/// 
					class Prize
					{
					///	
					///	 <summary> * 计算某人在某段时间内的奖金，有些参数在演示中并不会使用，
					///	 * 但是在实际业务实现上是会用的，为了表示这是个具体的业务方法，
					///	 * 因此这些参数被保留了 </summary>
					///	 * <param name="user"> 被计算奖金的人员 </param>
					///	 * <param name="begin"> 计算奖金的开始时间 </param>
					///	 * <param name="end"> 计算奖金的结束时间 </param>
					///	 * <returns> 某人在某段时间内的奖金 </returns>
					///	 
					public:
						virtual double calcPrize(std::string user, Date *begin, Date *end);
					///	
					///	 <summary> * 计算某人的当月业务奖金，参数重复，就不再注释了 </summary>
					///	 
					private:
						double monthPrize(std::string user, Date *begin, Date *end);
					///	
					///	 <summary> * 计算某人的累计奖金，参数重复，就不再注释了 </summary>
					///	 
					public:
						virtual double sumPrize(std::string user, Date *begin, Date *end);
					///	
					///	 <summary> * 判断人员是普通人员还是业务经理 </summary>
					///	 * <param name="user"> 被判断的人员 </param>
					///	 * <returns> true表示是业务经理,false表示是普通人员 </returns>
					///	 
					private:
						bool isManager(std::string user);
					///	
					///	 <summary> * 计算当月团队业务奖，参数重复，就不再注释了 </summary>
					///	 
					public:
						virtual double groupPrize(std::string user, Date *begin, Date *end);
					};

				}
			}
		}
	}
}