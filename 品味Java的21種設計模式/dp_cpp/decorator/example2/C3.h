#pragma once

#include "A.h"
#include "B.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example2
				{

					class C3
					{
					private:
						A *a;
						B *b;

					public:
						virtual void a1();
						virtual void b1();

						virtual void c11();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								a = new A();
								b = new B();

								initialized = true;
							}
						}

public:
	C3()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}