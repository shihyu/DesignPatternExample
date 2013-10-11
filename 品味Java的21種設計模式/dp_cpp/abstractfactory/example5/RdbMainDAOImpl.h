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

					class RdbMainDAOImpl : public OrderMainDAO
					{
					public:
						virtual void saveOrderMain();
					};

				}
			}
		}
	}
}