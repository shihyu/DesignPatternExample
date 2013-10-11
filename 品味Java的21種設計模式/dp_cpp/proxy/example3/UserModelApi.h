#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example3
				{
					///
					/// <summary> * 定义用户数据对象的接口 </summary>
					/// 
					class UserModelApi
					{
					public:
						virtual public std::string getUserId() = 0;
						virtual public void setUserId(std::string) = 0;
						virtual public std::string getName() = 0;
						virtual public void setName(std::string) = 0;
						virtual public std::string getDepId() = 0;
						virtual public void setDepId(std::string) = 0;
						virtual public std::string getSex() = 0;
						virtual public void setSex(std::string) = 0;
					};

				}
			}
		}
	}
}