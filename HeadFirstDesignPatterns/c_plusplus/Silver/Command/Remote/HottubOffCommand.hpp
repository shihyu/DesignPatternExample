#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_OFF_COMMAND_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class HottubOffCommand : public Command {

	private: const Hottub* _hottub;

	public: explicit HottubOffCommand( const Hottub* hottub ) :
		_hottub( hottub ) { assert( hottub );
	}
	public: void execute() const {
		_hottub->cool();
		_hottub->off();
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif