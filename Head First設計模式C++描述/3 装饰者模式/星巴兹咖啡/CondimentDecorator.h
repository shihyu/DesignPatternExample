#pragma once
#include "beverage.h"

//装饰者，调料
class CondimentDecorator :
	public Beverage
{
public:
	CondimentDecorator(void);

	virtual string getDescription() = 0;

	~CondimentDecorator(void);
};
