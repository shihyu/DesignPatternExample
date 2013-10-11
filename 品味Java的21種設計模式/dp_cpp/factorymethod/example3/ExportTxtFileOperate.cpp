#include "ExportTxtFileOperate.h"

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

					ExportFileApi *ExportTxtFileOperate::factoryMethod()
					{
						//创建导出成文本文件格式的对象
						return new ExportTxtFile();
					}
				}
			}
		}
	}
}
