#pragma once
#include "subject.h"
#include "observer.h"
#include <vector>
#include <algorithm>

using namespace std;

//具体主题

class WeatherData :
	public Subject
{
private:
	vector<Observer *> observers;   //用vector容器记录观察者,在构造函数中初始化
	float temperature;
	float humidity;
	float pressure;

public:
	WeatherData(void);

	void registerObserver(Observer *o);
	void removeObserver(Observer *o);
	void notifyObserver();
	
	void measurementsChanged();    //当从气象站取得新的观测值时，我们通知观察者
	void setMeasurements(float t, float h, float p);  //测试方法
	~WeatherData(void);
};
