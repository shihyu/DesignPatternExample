#include "ConcreteElementA.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example3
				{

					void ConcreteElementA::accept(Visitor *visitor)
					{
						//回调访问者对象的相应方法
						visitor->visitConcreteElementA(this);
					}

					void ConcreteElementA::opertionA()
					{
						//已有的功能实现
					}
				}
			}
		}
	}
}