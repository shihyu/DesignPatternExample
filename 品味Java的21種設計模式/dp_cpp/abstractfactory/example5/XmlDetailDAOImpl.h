#pragma once

#include "OrderDetailDAO.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example5
				{

					class XmlDetailDAOImpl : public OrderDetailDAO
					{

					public:
						virtual void saveOrderDetail();

					};

				}
			}
		}
	}
}