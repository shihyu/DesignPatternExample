//观察者模式：定义了对象之间的一对多依赖，这样一来，当一个对象改变状态时，它的所有者都会收到通知并自动更新

//OO原则：为交互对象之间的松耦合设计而努力

#include "weatherdata.h"
#include "currentconditiondisplay.h"

//测试
int main()
{
	//建立主题对象
	WeatherData weatherData;

	//建立观察者对象
	CurrentConditionDisplay currentDisplay(&weatherData);

	weatherData.setMeasurements(80, 65, 30.4);
	weatherData.setMeasurements(82, 70, 29.2);
	weatherData.setMeasurements(78, 90, 29.2);

	return 0;
}