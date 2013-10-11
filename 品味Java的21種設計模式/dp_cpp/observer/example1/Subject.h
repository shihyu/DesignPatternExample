#pragma once

#include "Observer.h"
#include <vector>

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
					/// <summary> * 目标对象，它知道观察它的观察者，并提供注册和删除观察者的接口 </summary>
					/// 
					class Subject
					{
					///	
					///	 <summary> * 用来保存注册的观察者对象 </summary>
					///	 
					private:
						std::vector<Observer*> observers;
					///	
					///	 <summary> * 注册观察者对象 </summary>
					///	 * <param name="observer"> 观察者对象 </param>
					///	 
					public:
						virtual void attach(Observer *observer);
					///	
					///	 <summary> * 删除观察者对象 </summary>
					///	 * <param name="observer"> 观察者对象 </param>
					///	 
						virtual void detach(Observer *observer);
					///	
					///	 <summary> * 通知所有注册的观察者对象 </summary>
					///	 
					protected:
						virtual void notifyObservers();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								observers = std::vector<Observer*>();

								initialized = true;
							}
						}

public:
	Subject()
	{
		InitializeInstanceFields();
	}
					};


				}
			}
		}
	}
}