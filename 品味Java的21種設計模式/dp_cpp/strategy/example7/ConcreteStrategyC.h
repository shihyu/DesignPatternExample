#pragma once

#include "AbstractClass.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example7
				{

					///
					/// <summary> * 实现具体的算法 </summary>
					/// 
					class ConcreteStrategyC : public AbstractClass
					{
					protected:
						virtual void stepOneOpe();
						virtual void stepTwoOpe();
					};



				}
			}
		}
	}
}