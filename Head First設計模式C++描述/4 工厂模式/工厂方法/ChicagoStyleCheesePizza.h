#pragma once
#include "pizza.h"

//具体产品类2
class ChicagoStyleCheesePizza :
	public Pizza
{
public:
	ChicagoStyleCheesePizza(void);
	~ChicagoStyleCheesePizza(void);

	void cut();  //覆盖了cut方法
};
