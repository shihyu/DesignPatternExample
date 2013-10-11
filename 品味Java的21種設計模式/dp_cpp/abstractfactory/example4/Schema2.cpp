#include "Schema2.h"

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

					object *Schema2::createProduct(int type)
					{
						object *retObj = 0;
						//type为1表示创建CPU，type为2表示创建主板
						if(type==1)
						{
							retObj = new AMDCPU(939);
						}
						else if(type==2)
						{
							retObj = new MSIMainboard(939);
						}
						return retObj;
					}
				}
			}
		}
	}
}
