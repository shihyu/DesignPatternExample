#include "C2.h"

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

					void C2::a1()
					{
						//转调A对象的功能
						a->a1();
					}

					void C2::c11()
					{
						puts("now in C2.c11");
					}
				}
			}
		}
	}
}
