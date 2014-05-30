#pragma once
#include "QuackBehavior.h"

//具体呱呱叫行为
class Quack :
	public QuackBehavior
{
public:
	Quack(void);

	void quack();

	~Quack(void);
};
