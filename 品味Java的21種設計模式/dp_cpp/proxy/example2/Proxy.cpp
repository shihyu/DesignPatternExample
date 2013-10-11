#include "Proxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example2
				{

					Proxy::Proxy(RealSubject *realSubject)
					{
						this->realSubject = realSubject;
					}

					void Proxy::request()
					{
						//在转调具体的目标对象前，可以执行一些功能处理

						//转调具体的目标对象的方法
						realSubject->request();

						//在转调具体的目标对象后，可以执行一些功能处理
					}
				}
			}
		}
	}
}
