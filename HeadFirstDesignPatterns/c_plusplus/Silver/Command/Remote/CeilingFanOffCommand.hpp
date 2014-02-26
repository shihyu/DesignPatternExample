#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_OFF_COMMAND_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class CeilingFanOffCommand : public Command {

	private: const CeilingFan* _ceilingFan;

	public: explicit CeilingFanOffCommand( const CeilingFan* ceilingFan ) :
		_ceilingFan( ceilingFan ) { assert( ceilingFan );
	}
	public: void execute() const {
		_ceilingFan->off();
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif