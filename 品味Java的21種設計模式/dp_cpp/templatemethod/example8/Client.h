#pragma once

#include "UserModel.h"
#include <string>
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example8
				{
					class Client
					{
						static void main(std::string args[]);
					private:
						static void printList(std::vector<UserModel*> &list);
					};
				}
			}
		}
	}
}