#include "Handler.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					void Handler::setSuccessor(Handler *successor)
					{
						this->successor = successor;
					}

					object *Handler::handleRequest(RequestModel *rm)
					{
						if(successor != 0)
						{
							//这个是默认的实现，如果子类不愿意处理这个请求，那就传递到下一个职责对象去处理
							return this->successor->handleRequest(rm);
						}
						else
						{
							puts("没有后续处理或者暂时不支持这样的功能处理");
							return false;
						}
					}
				}
			}
		}
	}
}