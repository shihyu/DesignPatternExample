#pragma once
#include "observer.h"
#include "subject.h"
#include "displayelement.h"
#include <iostream>

using namespace std;

//具体观察者，和书上一样，在此只实现其中一个
class CurrentConditionDisplay :
	public Observer, public DisplayElement
{
private:
	float temperature;
	float humidity;
	Subject* weatherData;

public:
	//构造器需要Weather对象作为注册之用
	CurrentConditionDisplay(Subject* w);

	void update(float temp, float humidity, float pressure);
	void display();

	~CurrentConditionDisplay(void);
};
