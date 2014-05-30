#pragma once
#include "beverage.h"

//具体被装饰者
class HouseBlend :
	public Beverage
{
public:
	HouseBlend(void);

	double cost();

	~HouseBlend(void);
};
