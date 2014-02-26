#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Undo {

class CeilingFan {

	private: mutable int _speed;
	private: std::string _location;
 
	public: static const int HIGH = 3;
	public: static const int MEDIUM = 2;
	public: static const int LOW = 1;
	public: static const int OFF = 0;

	public: explicit CeilingFan( std::string location ) :
		_speed( OFF ), _location( location ) {
	}
  	public: void high() const {
		_speed = HIGH;
		std::cout << _location.c_str() << " ceiling fan is on high" << std::endl;
	} 
 	public: void medium() const {
		_speed = MEDIUM;
		std::cout << _location.c_str() << " ceiling fan is on medium" << std::endl;
	}
 	public: void low() const {
		_speed = LOW;
		std::cout << _location.c_str() << " ceiling fan is on low" << std::endl;
	}
 	public: void off() const {
		_speed = OFF;
		std::cout << _location.c_str() << " ceiling fan is off" << std::endl;
	}
 	public: int getSpeed() const {
		return _speed;
	}
};

} // namespace Undo
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
