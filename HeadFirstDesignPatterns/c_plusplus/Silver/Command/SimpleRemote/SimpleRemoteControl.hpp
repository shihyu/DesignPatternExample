#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace SimpleRemote {

class SimpleRemoteControl {

	private: const Command* _slot;
 
	public: SimpleRemoteControl() :
		_slot( 0 ) {
	}
	public: void setCommand( const Command* command ) { assert( command );
		_slot = command;
	}
	public: void buttonWasPressed() const { assert( _slot );
		_slot->execute();
	}
};

} // namespace SimpleRemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif