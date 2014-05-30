#pragma once
#include "beverage.h"

//具体被装饰者
class Espresso :
	public Beverage
{
public:
	Espresso(void);

	double cost();

	~Espresso(void);
};
