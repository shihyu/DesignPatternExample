#include "C4.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example2
				{

					void C4::setB(B *b)
					{
						this->b = b;
					}

					void C4::a1()
					{
						//转调A对象的功能
						a->a1();
					}

					void C4::b1()
					{
						//转调B对象的功能
						b->b1();
					}

					void C4::c11()
					{
						puts("now in C4.c11");
					}
				}
			}
		}
	}
}
