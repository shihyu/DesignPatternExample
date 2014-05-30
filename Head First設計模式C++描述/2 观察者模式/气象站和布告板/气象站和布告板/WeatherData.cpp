#include "WeatherData.h"

WeatherData::WeatherData(void)
{
	observers = vector<Observer *>();
}

WeatherData::~WeatherData(void)
{
}

void WeatherData::registerObserver(Observer *o)
{
	observers.push_back(o);
}

void WeatherData::removeObserver(Observer *o)
{
	vector<Observer *>::iterator iter = find(observers.begin(), observers.end(), o);
	if (iter != observers.end())
		observers.erase(iter);
}

void WeatherData::notifyObserver()
{
	for (int i=0; i<observers.size(); i++)
	{
		observers[i]->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObserver();
}

void WeatherData::setMeasurements(float t, float h, float p)
{
	temperature = t;
	humidity = h;
	pressure = p;
	measurementsChanged();
}