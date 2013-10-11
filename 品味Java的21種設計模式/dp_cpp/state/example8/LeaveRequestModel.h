#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example8
				{
					///
					/// <summary> * 请假单对象 </summary>
					/// 
					class LeaveRequestModel
					{
					///	
					///	 <summary> * 请假人 </summary>
					///	 
					private:
						std::string user;
					///	
					///	 <summary> * 请假开始时间 </summary>
					///	 
						std::string beginDate;
					///	
					///	 <summary> * 请假天数 </summary>
					///	 
						int leaveDays;
					///	
					///	 <summary> * 审核结果 </summary>
					///	 
						std::string result;

					public:
						virtual std::string getResult();

						virtual void setResult(std::string result);

						virtual std::string getUser();

						virtual std::string getBeginDate();

						virtual int getLeaveDays();
						virtual void setUser(std::string user);

						virtual void setBeginDate(std::string beginDate);

						virtual void setLeaveDays(int leaveDays);
					};

				}
			}
		}
	}
}