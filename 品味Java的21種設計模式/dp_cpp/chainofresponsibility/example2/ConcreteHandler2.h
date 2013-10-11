#pragma once

#include "Handler.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example2
				{

					///
					/// <summary> * 具体的职责对象，用来处理请求 </summary>
					/// 
					class ConcreteHandler2 : public Handler
					{
					public:
						virtual void handleRequest();
					};


				}
			}
		}
	}
}