#include "Schema1.h"

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

					object *Schema1::createProduct(int type)
					{
						object *retObj = 0;
						//type为1表示创建CPU，type为2表示创建主板
						if(type==1)
						{
							retObj = new IntelCPU(1156);
						}
						else if(type==2)
						{
							retObj = new GAMainboard(1156);
						}
						return retObj;
					}
				}
			}
		}
	}
}
