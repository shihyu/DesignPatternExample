#pragma once

#include <iostream>

using namespace std;

//封装飞行行为
class FlyBehavior
{
public:
	FlyBehavior(void);

	virtual void fly() = 0;

	~FlyBehavior(void);
};
