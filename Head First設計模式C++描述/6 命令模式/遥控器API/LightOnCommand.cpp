#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light l) {
    light = l;
}

LightOnCommand::~LightOnCommand(void) {
}

void LightOnCommand::execute() {
    light.on();
}
