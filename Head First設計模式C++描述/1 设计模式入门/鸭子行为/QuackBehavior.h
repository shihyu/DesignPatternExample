#pragma once

#include <iostream>

using namespace std;

//·â×°ßÉßÉ½ÐÐÐÎª
class QuackBehavior
{
public:
	QuackBehavior(void);

	virtual void quack() = 0;

	~QuackBehavior(void);
};
