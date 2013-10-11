#include "A1.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example6
				{

					void A1::t1()
					{
						//这里需要使用C1类，可是不知道究竟是用哪一个，也就不主动去创建C1了，怎么办？
						//反正会在子类里面实现，这样更省心，这里不用管怎么获取C1，直接使用就好了
						createC1()->tc();
					}
				}
			}
		}
	}
}