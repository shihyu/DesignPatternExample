#pragma once

#include "Subject.h"
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
					/// <summary> * 报纸对象，具体的目标实现 </summary>
					/// 
					class NewsPaper : public Subject
					{
					///	
					///	 <summary> * 报纸的具体内容 </summary>
					///	 
					private:
						std::string content;
					///	
					///	 <summary> * 获取报纸的具体内容 </summary>
					///	 * <returns> 报纸的具体内容 </returns>
					///	 
					public:
						virtual std::string getContent();
					///	
					///	 <summary> * 示意，设置报纸的具体内容，相当于要出版报纸了 </summary>
					///	 * <param name="content"> 报纸的具体内容 </param>
					///	 
						virtual void setContent(std::string content);
					};

				}
			}
		}
	}
}