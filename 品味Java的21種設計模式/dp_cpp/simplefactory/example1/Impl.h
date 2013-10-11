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
				namespace example1
				{
					///
					/// <summary> * 对接口的实现  </summary>
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