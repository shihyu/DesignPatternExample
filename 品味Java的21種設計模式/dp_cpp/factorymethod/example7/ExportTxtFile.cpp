#include "ExportTxtFile.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example7
				{

					bool ExportTxtFile::export(std::string data)
					{
						//简单示意一下，这里需要操作文件
						puts("导出数据"+data+"到文本文件");
						return true;
					}
				}
			}
		}
	}
}