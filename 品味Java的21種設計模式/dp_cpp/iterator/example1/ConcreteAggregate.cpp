#include "ConcreteAggregate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example1
				{

					ConcreteAggregate::ConcreteAggregate(std::string ss[])
					{
						this->ss = ss;
					}

					Iterator *ConcreteAggregate::createIterator()
					{
						//实现创建Iterator的工厂方法
						return new ConcreteIterator(this);
					}

					object *ConcreteAggregate::get(int index)
					{
						object *retObj = 0;
						if(index < sizeof(ss) / sizeof(ss[0]))
						{
							retObj = ss[index];
						}
						return retObj;
					}

					int ConcreteAggregate::size()
					{
						return sizeof(this->ss) / sizeof(this->ss[0]);
					}
				}
			}
		}
	}
}