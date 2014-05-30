#pragma once
#include "QuackBehavior.h"

//æﬂÃÂﬂ…ﬂ…Ω–¿‡
class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack(void);

	void quack();

	~MuteQuack(void);
};
