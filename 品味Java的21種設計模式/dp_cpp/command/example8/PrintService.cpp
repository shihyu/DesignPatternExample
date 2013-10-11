#include "PrintService.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example8
				{

					PrintService::PrintService(std::string s)
					{
						InitializeInstanceFields();
						str = s;
					}

					void PrintService::execute()
					{
						puts("打印的内容为="+str);
					}
				}
			}
		}
	}
}