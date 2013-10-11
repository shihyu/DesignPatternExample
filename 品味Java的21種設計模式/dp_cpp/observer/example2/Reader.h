#pragma once

#include "Observer.h"
#include "Subject.h"
#include "NewsPaper.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example2
				{
					///
					/// <summary> * 真正的读者，为了简单就描述一下姓名 </summary>
					/// 
					class Reader : public Observer
					{
					///	
					///	 <summary> * 读者的姓名 </summary>
					///	 
					private:
						std::string name;

					public:
						virtual void update(Subject *subject);
						virtual std::string getName();
						virtual void setName(std::string name);
					};

				}
			}
		}
	}
}