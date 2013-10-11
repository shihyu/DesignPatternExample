#include "MainboardFactory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example1
				{

					MainboardApi *MainboardFactory::createMainboardApi(int type)
					{
						MainboardApi *mainboard = 0;
						//根据参数来选择并创建相应的主板对象
						if(type==1)
						{
							mainboard = new GAMainboard(1156);
						}
						else if(type==2)
						{
							mainboard = new MSIMainboard(939);
						}
						return mainboard;
					}
				}
			}
		}
	}
}
