#pragma once

#include "Api.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example5
				{
					///
					/// <summary> * 对某个接口的一种实现  </summary>
					/// 
					class Impl : public Api
					{

					public:
						virtual void test1(std::string s);
					};

				}
			}
		}
	}
}