#include "Undo.hpp"

using namespace HeadFirstDesignPatterns::Command::Undo;

int main( int argc, char* argv[] ) {

	std::auto_ptr< RemoteControlWithUndo > remoteControl(
		new RemoteControlWithUndo() );

	std::auto_ptr< Light > livingRoomLight(
		new Light( "Living Room" ) );

	std::auto_ptr< LightOnCommand > livingRoomLightOn(
		new LightOnCommand( livingRoomLight.get() ) );
	std::auto_ptr< LightOffCommand > livingRoomLightOff(
		new LightOffCommand( livingRoomLight.get() ) );

	remoteControl->setCommand( 0, livingRoomLightOn.get(), livingRoomLightOff.get() );

	remoteControl->onButtonWasPushed( 0 );
	remoteControl->offButtonWasPushed( 0 );
	std::cout << remoteControl->toString() << std::endl;
	remoteControl->undoButtonWasPushed();
	remoteControl->offButtonWasPushed( 0 );
	remoteControl->onButtonWasPushed( 0 );
	std::cout << remoteControl->toString() << std::endl;
	remoteControl->undoButtonWasPushed();

	std::auto_ptr< CeilingFan > ceilingFan(
		new CeilingFan( "Living Room" ) );

	std::auto_ptr< CeilingFanMediumCommand > ceilingFanMedium(
		new CeilingFanMediumCommand( ceilingFan.get() ) );
	std::auto_ptr< CeilingFanHighCommand > ceilingFanHigh(
		new CeilingFanHighCommand( ceilingFan.get() ) );
	std::auto_ptr< CeilingFanOffCommand > ceilingFanOff(
		new CeilingFanOffCommand( ceilingFan.get() ) );

	remoteControl->setCommand( 0, ceilingFanMedium.get(), ceilingFanOff.get() );
	remoteControl->setCommand( 1, ceilingFanHigh.get(), ceilingFanOff.get() );

	remoteControl->onButtonWasPushed( 0 );
	remoteControl->offButtonWasPushed( 0 );
	std::cout << remoteControl->toString() << std::endl;
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed( 1 );
	std::cout << remoteControl->toString() << std::endl;
	remoteControl->undoButtonWasPushed();

	return 0;
}
