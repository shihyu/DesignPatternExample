#include "RecursiveTest.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example4
				{

					int RecursiveTest::recursive(int a)
					{
						if(a==1)
						{
							return 1;
						}
						return a * recursive(a-1);
					}

					void RecursiveTest::main(std::string args[])
					{
						RecursiveTest *test = new RecursiveTest();
						int result = test->recursive(5);
						puts("5µÄ½×³Ë="+result);
					}
				}
			}
		}
	}
}