#pragma once
#include "pizzastore.h"
#include "chicagostylecheesepizza.h"

class ChicagoPizzaStore :
	public PizzaStore
{
public:
	ChicagoPizzaStore(void);
	~ChicagoPizzaStore(void);

	Pizza* createPizza(string type);
};
