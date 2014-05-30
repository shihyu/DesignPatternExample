#pragma once
#include <string>
#include "pizza.h"

using namespace std;

//抽象工厂类
class PizzaStore
{
public:
	PizzaStore(void);
	~PizzaStore(void);

	
	virtual Pizza *orderPizza(string type);
	//工厂方法
	virtual Pizza *createPizza(string type) = 0;
};
