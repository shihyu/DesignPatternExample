#pragma once

#include "ExportOperate.h"
#include "ExportFileApi.h"
#include "ExportTxtFile.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example3
				{
					///
					/// <summary> * 具体的创建器实现对象，实现创建导出成文本文件格式的对象 </summary>
					/// 
					class ExportTxtFileOperate : public ExportOperate
					{

					protected:
						virtual ExportFileApi *factoryMethod();

					};

				}
			}
		}
	}
}