#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example1
				{

					void Client::main(std::string args[]) throw(Exception)
					{
						UserManager *userManager = new UserManager();
						Collection<UserModel*> *col = userManager->getUserByDepId("0101");
						puts(col);
					}
				}
			}
		}
	}
}