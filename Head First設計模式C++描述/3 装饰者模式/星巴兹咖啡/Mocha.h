#pragma once
#include "condimentdecorator.h"

//Mocha是一个装饰者
class Mocha :
	public CondimentDecorator
{
private:
	Beverage* beverage;   //用一个成员变量记录被装饰者
public:
	Mocha(Beverage* b);   //把被装饰者当做构造函数的参数，再由构造函数记录到成员变量中

	string getDescription();
	double cost();

	~Mocha(void);
};
