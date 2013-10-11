#include "Director.h"

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

					Director::Director(Builder *builder)
					{
						this->builder = builder;
					}

					void Director::construct()
					{
						//通过使用构建器接口来构建最终的产品对象
						builder->buildPart();
					}
				}
			}
		}
	}
}