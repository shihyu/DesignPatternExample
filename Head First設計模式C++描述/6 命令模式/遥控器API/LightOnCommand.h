#pragma once
#include "command.h"
#include "light.h"

class LightOnCommand :
	public Command
{
private:
	Light light;
public:
	LightOnCommand(Light l);
	~LightOnCommand(void);

	void execute();
};
