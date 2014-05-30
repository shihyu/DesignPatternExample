#pragma once
#include "quackbehavior.h"

//æﬂÃÂﬂ…ﬂ…Ω–¿‡
class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack(void);

	void quack();

	~MuteQuack(void);
};
