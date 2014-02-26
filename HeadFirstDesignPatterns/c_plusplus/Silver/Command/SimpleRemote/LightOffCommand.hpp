#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_OFF_COMMAND_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace SimpleRemote {

class LightOffCommand : public Command {

	private: const Light* _light;
 
	public: explicit LightOffCommand( const Light* light ) :
		_light( light ) { assert( light );
	}
	public: void execute() const {
		_light->off();
	}
};

} // namespace SimpleRemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif