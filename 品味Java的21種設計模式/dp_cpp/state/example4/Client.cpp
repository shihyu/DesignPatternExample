#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						VoteManager *vm = new VoteManager();
						for(int i=0;i<10;i++)
						{
							vm->vote("u1", "A");
						}
					}
				}
			}
		}
	}
}