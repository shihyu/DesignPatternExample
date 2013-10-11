#pragma once

#include "OrderMainDAO.h"

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

					class XmlMainDAOImpl : public OrderMainDAO
					{

					public:
						virtual void saveOrderMain();

					};

				}
			}
		}
	}
}