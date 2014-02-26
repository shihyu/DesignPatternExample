#ifndef	_HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class CeilingFan {

	private: mutable int _level;
	private: std::string _location;

	public: static const int HIGH = 2;
	public: static const int MEDIUM = 1;
	public: static const int LOW = 0;
 
	public: explicit CeilingFan( const std::string location ) :
		_level( LOW ), _location( location ) {
	}
	public: void high() const {
		_level = HIGH;
		std::cout << _location.c_str() << " ceiling fan is on high" << std::endl;
	} 
	public: void medium() const {
		_level = MEDIUM;
		std::cout << _location.c_str() << " ceiling fan is on medium" << std::endl;
	}
	public: void low() const {
		_level = LOW;
		std::cout << _location.c_str() << " ceiling fan is on low" << std::endl;
	}
	public: void off() const {
		_level = 0;
		std::cout << _location.c_str() << " ceiling fan is off" << std::endl;
	}
	public: int getSpeed() const {
		return _level;
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif