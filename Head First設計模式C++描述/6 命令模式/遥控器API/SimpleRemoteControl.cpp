#include "SimpleRemoteControl.h"

SimpleRemoteControl::SimpleRemoteControl(void)
{
}

SimpleRemoteControl::~SimpleRemoteControl(void)
{
}

void SimpleRemoteControl::setCommand(Command *command)
{
	slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
	slot->execute();
}