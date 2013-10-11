#include "ExportOperate.h"

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

					bool ExportOperate::export(std::string data)
					{
						//使用工厂方法
						ExportFileApi *api = factoryMethod();
						return api->export(data);
					}
				}
			}
		}
	}
}
