#include "ExportOperate2.h"

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

					ExportFileApi *ExportOperate2::factoryMethod(int type)
					{
						ExportFileApi *api = 0;
						//可以全部覆盖，也可以选择自己感兴趣的覆盖，
						//这里只想添加自己新的实现，其他的不管
						if(type==3)
						{
							api = new ExportXml();
						}
						else
						{
							//其他的还是让父类来实现
							api = ExportOperate::factoryMethod(type);
						}
						return api;
					}
				}
			}
		}
	}
}
