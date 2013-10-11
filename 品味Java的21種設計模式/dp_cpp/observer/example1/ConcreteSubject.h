#pragma once

#include "Subject.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example1
				{

					///
					/// <summary> * 具体的目标对象，负责把有关状态存入到相应的观察者对象，
					/// * 并在自己状态发生改变时，通知各个观察者 </summary>
					/// 
					class ConcreteSubject : public Subject
					{
					///	
					///	 <summary> * 示意，目标对象的状态 </summary>
					///	 
					private:
						std::string subjectState;
					public:
						virtual std::string getSubjectState();
						virtual void setSubjectState(std::string subjectState);
					};


				}
			}
		}
	}
}