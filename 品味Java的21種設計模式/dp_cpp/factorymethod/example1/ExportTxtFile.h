#pragma once

#include "ExportFileApi.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example1
				{
					///
					/// <summary> * 导出成文本文件格式的对象 </summary>
					/// 
					class ExportTxtFile : public ExportFileApi
					{
					public:
						virtual bool export(std::string data);
					};

				}
			}
		}
	}
}