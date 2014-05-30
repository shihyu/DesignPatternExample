#pragma once
#include "pizzastore.h"
#include "nystylecheesepizza.h"

//具体工厂类
class NYPizzaStore :
	public PizzaStore
{
public:
	NYPizzaStore(void);
	~NYPizzaStore(void);

	//具体工厂方法
	Pizza* createPizza(string item);
};
