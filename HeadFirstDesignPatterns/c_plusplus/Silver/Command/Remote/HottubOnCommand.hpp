#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_ON_COMMAND_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class HottubOnCommand : public Command {

	private: const Hottub* _hottub;

	public: explicit HottubOnCommand( const Hottub* hottub ) :
		_hottub( hottub ) { assert( hottub );
	}
	public: void execute() const {
		_hottub->on();
		_hottub->heat();
		_hottub->bubblesOn();
	}
};

} // namespace Simpleemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif