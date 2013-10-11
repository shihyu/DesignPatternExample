#include "AbstractTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example5
				{

					void AbstractTemplate::templateMethod()
					{
						//第一步
						this->operation1();
						//第二步		
						this->operation2();
						//第三步
						this->doPrimitiveOperation1();
						//第四步
						this->doPrimitiveOperation2();
						//第五步
						this->hookOperation1();
					}

					void AbstractTemplate::operation1()
					{
						//在这里具体的实现
					}

					void AbstractTemplate::operation2()
					{
						//在这里具体的实现
					}

					void AbstractTemplate::commonOperation()
					{
						//在这里具体的实现
					}

					void AbstractTemplate::hookOperation1()
					{
						//在这里提供缺省的实现
					}
				}
			}
		}
	}
}
