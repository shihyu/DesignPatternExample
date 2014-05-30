#pragma once

//观察者接口，此例中用于更改数据

class Observer
{
public:
	Observer(void);

	virtual void update(float temp, float humidity, float pressure) = 0;

	~Observer(void);
};
