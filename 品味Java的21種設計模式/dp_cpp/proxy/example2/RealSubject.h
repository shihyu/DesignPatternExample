#pragma once

#include "Subject.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example2
				{
					///
					/// <summary> * 具体的目标对象，是真正被代理的对象 </summary>
					/// 
					class RealSubject : public Subject
					{

					public:
						virtual void request();

					};

				}
			}
		}
	}
}