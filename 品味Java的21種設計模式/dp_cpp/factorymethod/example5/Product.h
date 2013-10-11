#pragma once

#include "Product1.h"
#include "Product2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example5
				{

					class Product
					{
					public:
						virtual public void setProduct1(Product1*) = 0;
						virtual public void setProduct2(Product2*) = 0;
					};

				}
			}
		}
	}
}