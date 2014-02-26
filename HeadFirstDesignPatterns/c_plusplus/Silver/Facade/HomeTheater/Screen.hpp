#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class Screen {

	private: std::string _description;
	
	private: Screen( const Screen& ); // Disable copy constructor
	private: void operator=( const Screen& ); // Disable assignment operator

	public: Screen( std::string description ) :
		_description( description ) {
	}
	public: void up() {
		std::cout << _description.c_str() << " going up" << std::endl;
	}
	public: void down() {
		std::cout << _description.c_str() << " going down" << std::endl;
	}
    public: std::string toString() {
		return _description;
    }
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
