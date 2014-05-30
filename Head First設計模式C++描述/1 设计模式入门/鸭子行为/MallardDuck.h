#pragma once
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

//具体客户类
class MallardDuck :
	public Duck
{
public:
	MallardDuck(void);

	void display();

	~MallardDuck(void);
};
