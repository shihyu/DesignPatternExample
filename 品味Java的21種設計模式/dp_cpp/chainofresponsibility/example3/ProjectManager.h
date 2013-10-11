#pragma once

#include "Handler.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example3
				{

					class ProjectManager : public Handler
					{

					public:
						virtual std::string handleFeeRequest(std::string user, double fee);

					};

				}
			}
		}
	}
}