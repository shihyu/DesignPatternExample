#ifndef	_HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class GarageDoor {

	private: std::string _location;
 
	public: explicit GarageDoor( const std::string location ) :
		_location( location ) {
	}
 	public: void up() const {
		std::cout << _location.c_str() << " Door is Up" << std::endl;
	} 
	public: void down() const {
		std::cout << _location.c_str() << " Door is Down" << std::endl;
	}
	public: void stop() const {
		std::cout << _location.c_str() << " Door is Stopped" << std::endl;
	}
	public: void lightOn() const {
		std::cout << _location.c_str() << " light is on" << std::endl;
	}
	public: void lightOff() const {
		std::cout << _location.c_str() << " light is off" << std::endl;
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif