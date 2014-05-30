#pragma once
#include "command.h"

class SimpleRemoteControl
{
private:
	Command *slot;   //有一个插槽持有命令
public:
	SimpleRemoteControl(void);
	~SimpleRemoteControl(void);

	void setCommand(Command *command);
	void buttonWasPressed();
};
