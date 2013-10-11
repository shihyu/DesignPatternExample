#pragma once

#include "A1.h"
#include "C1.h"
#include "C2.h"

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

					class A2 : public A1
					{
					protected:
						virtual C1 *createC1();
					};

				}
			}
		}
	}
}