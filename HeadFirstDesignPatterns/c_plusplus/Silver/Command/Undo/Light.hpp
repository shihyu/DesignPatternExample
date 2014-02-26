#ifndef	_HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Undo {

class Light {

	private: std::string _location;
	private: mutable int _level;

	public: explicit Light( const std::string location ) : 
		_location( location ), _level( 0 ) {
	}
	public: void on() const {
		_level = 100;
		std::cout << _location.c_str() << " light is on" << std::endl;
	}
	public: void off() const {
		_level = 0;
		std::cout << _location.c_str() << " light is off" << std::endl;
	}
	public: void dim( int level ) const {
		_level = level;
		if( _level == 0 ) {
			off();
		} else {
			std::cout << "Light is dimmed to " << _level << "%" << std::endl;
		}
	}
	public: int getLevel() const {
		return _level;
	}
};

} // namespace Undo
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif