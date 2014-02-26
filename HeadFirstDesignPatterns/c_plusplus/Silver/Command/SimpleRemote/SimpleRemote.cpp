#include "SimpleRemote.hpp"

using namespace HeadFirstDesignPatterns::Command::SimpleRemote;

int main( int argc, char* argv[] ) {

	std::auto_ptr< SimpleRemoteControl > remote( new SimpleRemoteControl() );
	std::auto_ptr< Light > light( new Light() );
	std::auto_ptr< GarageDoor > garageDoor( new GarageDoor() );
	std::auto_ptr< LightOnCommand > lightOn( new LightOnCommand( light.get() ) );
	std::auto_ptr< GarageDoorOpenCommand > garageOpen( new GarageDoorOpenCommand(garageDoor.get() ) );

	remote->setCommand( lightOn.get() );
	remote->buttonWasPressed();
	remote->setCommand( garageOpen.get() );
	remote->buttonWasPressed();

	return 0;
}