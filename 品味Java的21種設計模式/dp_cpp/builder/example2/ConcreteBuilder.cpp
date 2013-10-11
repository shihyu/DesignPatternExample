#include "ConcreteBuilder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example2
				{

					Product *ConcreteBuilder::getResult()
					{
						return resultProduct;
					}

					void ConcreteBuilder::buildPart()
					{
						//构建某个部件的功能处理
					}
				}
			}
		}
	}
}
