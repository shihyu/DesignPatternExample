#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class TheaterLights {

	private: std::string _description;
	
	private: TheaterLights( const TheaterLights& ); // Disable copy constructor
	private: void operator=( const TheaterLights& ); // Disable assignment operator

	public: TheaterLights( std::string description ) :
		_description( description ) {
	}
	public: void on() {
		std::cout << _description.c_str() << " on" << std::endl;
	}

	public: void off() {
		std::cout << _description.c_str() << " off" << std::endl;
	}

	public: void dim( int level ) {
		std::cout << _description.c_str() << " dimming to " << level  << "%" << std::endl;
	}

	public: std::string toString() {
		return _description;
	}
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
