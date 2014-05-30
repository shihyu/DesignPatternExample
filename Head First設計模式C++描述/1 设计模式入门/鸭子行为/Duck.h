#pragma once

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

using namespace std;

//¿Í»§Àà
class Duck
{
protected:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;

public:
	Duck(void);

	virtual void display() = 0;
	void performFly();
	void performQuack();
	void swim();

	~Duck(void);
};
