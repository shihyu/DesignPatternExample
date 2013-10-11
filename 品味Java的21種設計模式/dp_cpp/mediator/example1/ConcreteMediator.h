#pragma once

#include "Mediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Colleague.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example1
				{
					///
					/// <summary> * 具体的中介者实现 </summary>
					/// 
					class ConcreteMediator : public Mediator
					{

					///	
					///	 <summary> * 持有并维护同事A </summary>
					///	 
					private:
						ConcreteColleagueA *colleagueA;
					///	
					///	 <summary> * 持有并维护同事B </summary>
					///	 
						ConcreteColleagueB *colleagueB;

					///	
					///	 <summary> * 设置中介者需要了解并维护的同事A对象 </summary>
					///	 * <param name="colleague"> 同事A对象 </param>
					///	 
					public:
						virtual void setConcreteColleagueA(ConcreteColleagueA *colleague);
					///	
					///	 <summary> * 设置中介者需要了解并维护的同事B对象 </summary>
					///	 * <param name="colleague"> 同事B对象 </param>
					///	 
						virtual void setConcreteColleagueB(ConcreteColleagueB *colleague);

						virtual void changed(Colleague *colleague);

					};

				}
			}
		}
	}
}