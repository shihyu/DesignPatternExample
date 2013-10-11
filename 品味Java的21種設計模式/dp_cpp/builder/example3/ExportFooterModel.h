#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example3
				{
					///
					/// <summary> * 描述输出到文件尾的内容的对象 </summary>
					/// 
					class ExportFooterModel
					{
					///	
					///	 <summary> * 输出人 </summary>
					///	 
					private:
						std::string exportUser;

					public:
						virtual std::string getExportUser();

						virtual void setExportUser(std::string exportUser);

					};

				}
			}
		}
	}
}