#pragma once

#include "Customer.h"
#include "EnterpriseCustomer.h"
#include "PersonalCustomer.h"
#include <string>
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example2
				{


					class Client
					{
						static void main(std::string args[]);
					private:
						static Collection<Customer*> *preparedTestData();
					};
				}
			}
		}
	}
}