#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_ON_COMMAND_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class LightOnCommand : public Command {

	private: const Light* _light;
 
	public: explicit LightOnCommand( const Light* light ) :
		_light( light ) { assert( light );
	}
	public: void execute() const {
		_light->on();
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif