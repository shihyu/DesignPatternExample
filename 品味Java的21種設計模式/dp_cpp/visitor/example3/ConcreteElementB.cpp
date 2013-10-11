#include "ConcreteElementB.h"

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

					void ConcreteElementB::accept(Visitor *visitor)
					{
						//回调访问者对象的相应方法
						visitor->visitConcreteElementB(this);
					}

					void ConcreteElementB::opertionB()
					{
						//已有的功能实现
					}
				}
			}
		}
	}
}
