#pragma once

#include "Colleague.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{
					///
					/// <summary> * 中介者对象的接口 </summary>
					/// 
					class Mediator
					{
					///	
					///	 <summary> * 同事对象在自身改变的时候来通知中介者的方法，
					///	 * 让中介者去负责相应的与其他同事对象的交互 </summary>
					///	 * <param name="colleague"> 同事对象自身，好让中介者对象通过对象实例
					///	 *                  去获取同事对象的状态 </param>
					///	 
					public:
						virtual public void changed(Colleague*) = 0;
					};


				}
			}
		}
	}
}