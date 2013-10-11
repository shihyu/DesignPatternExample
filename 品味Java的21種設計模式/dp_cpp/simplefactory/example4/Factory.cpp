#include "Factory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example4
				{

					Api *Factory::createApi(int type)
					{
						//这里的type也可以不由外部传入，而是直接读取配置文件来获取
						//为了把注意力放在模式本身上，这里就不去写读取配置文件的代码了

						//根据type来进行选择，当然这里的1和2应该做成常量
						Api *api = 0;
						if(type==1)
						{
							api = new Impl();
						}
						else if(type==2)
						{
							api = new Impl2();
						}
						return api;
					}
				}
			}
		}
	}
}