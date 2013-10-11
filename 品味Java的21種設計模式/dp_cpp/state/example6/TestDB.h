#pragma once

#include <map>

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
					class TestDB
					{
					public:
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static Map *map = std::map();
//JAVA TO C++ CONVERTER TODO TASK: Static constructors are not allowed in native C++:
						static TestDB();
					};
					class MemoryDB : public Runnable
					{

					public:
						virtual void run();
					};

				}
			}
		}
	}
}