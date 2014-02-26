#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

//
// This is the invoker
//
class RemoteControl {

	private: static const int SLOTS = 7;

	private: Command* _onCommands[SLOTS];
	private: Command* _offCommands[SLOTS];
	private: Command* _noCommand;

	private: RemoteControl( const RemoteControl& ); // Disable copy constructor
	private: void operator=( const RemoteControl& ); // Disable assignment operator

	public: RemoteControl() {
		_noCommand = new NoCommand();
		for( int i = 0; i < SLOTS; i++ ) {
			_onCommands[i]  = _noCommand;
			_offCommands[i] = _noCommand;
		}
	}
	public: ~RemoteControl() {
		delete _noCommand;
	}
	public: void setCommand( int slot, Command* onCommand, Command* offCommand ) { assert( slot <= SLOTS ); assert( onCommand ); assert ( offCommand );
		_onCommands[slot] = onCommand;
		_offCommands[slot] = offCommand;
	}
	public: void onButtonWasPushed( int slot ) const { assert( slot <= SLOTS );
		_onCommands[slot]->execute();
	}
	public: void offButtonWasPushed( int slot ) const { assert( slot <= SLOTS );
		_offCommands[slot]->execute();
	}
	public: std::string toString() const {
		std::stringstream value;
		value << "\n------ Remote Control -------\n" << std::endl;
		for( int i = 0; i < SLOTS; i++ ) {
			value << "[slot " << i << "] ";
			value << typeid( *_onCommands[i] ).name();
			value << "    ";
			value << typeid( *_offCommands[i] ).name();
			value << std::endl;
		}
		return value.str();
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif