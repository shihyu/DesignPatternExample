#include "ConcreteVisitor2.h"

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

					void ConcreteVisitor2::visitConcreteElementA(ConcreteElementA *element)
					{
						//把去访问ConcreteElementA时，需要执行的功能实现在这里
						//可能需要访问元素已有的功能，比如：
						element->opertionA();
					}

					void ConcreteVisitor2::visitConcreteElementB(ConcreteElementB *element)
					{
						//把去访问ConcreteElementB时，需要执行的功能实现在这里
						//可能需要访问元素已有的功能，比如：
						element->opertionB();
					}
				}
			}
		}
	}
}
