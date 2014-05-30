#pragma once
#include "duck.h"
#include "flywithwings.h"
#include "quack.h"

//具体客户类
class MallardDuck :
	public Duck
{
public:
	MallardDuck(void);

	void display();

	~MallardDuck(void);
};
