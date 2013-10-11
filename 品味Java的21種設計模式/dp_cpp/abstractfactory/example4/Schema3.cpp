#include "Schema3.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example4
				{

					object *Schema3::createProduct(int type)
					{
						object *retObj = 0;
						//type为1表示创建CPU，type为2表示创建主板，type为3表示创建内存
						if(type==1)
						{
							retObj = new IntelCPU(1156);
						}
						else if(type==2)
						{
							retObj = new GAMainboard(1156);
						}
						//创建新添加的产品
						else if(type==3)
						{
							retObj = new HyMemory();
						}
						return retObj;
					}
				}
			}
		}
	}
}