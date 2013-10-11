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
				namespace example4
				{
					///
					/// <summary> * 对接口的一种实现  </summary>
					/// 
					class Impl2 : public Api
					{

					public:
						virtual void test1(std::string s);
					};

				}
			}
		}
	}
}