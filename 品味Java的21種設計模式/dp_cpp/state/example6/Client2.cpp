#include "Client2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example6
				{

					void Client2::main(std::string args[])
					{
						TestDB::map->put("b","22");
						puts("bb=="+TestDB::map->size());
					}
				}
			}
		}
	}
}