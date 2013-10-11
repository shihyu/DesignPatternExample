#include "ExportOperate.h"

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

					bool ExportOperate::export(int type, std::string data)
					{
						ExportFileApi *api = 0;
						//根据类型来选择究竟要创建哪一种导出文件对象
						if(type == 1)
						{
							api = new ExportTxtFile();
						}
						else if(type == 2)
						{
							api = new ExportDB();
						}
						return api->export(data);
					}
				}
			}
		}
	}
}
