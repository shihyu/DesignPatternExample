#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class Projector {

	private: std::string _description;
	private: DvdPlayer*  _dvdPlayer;
	
	private: Projector( const Projector& ); // Disable copy constructor
	private: void operator=( const Projector& ); // Disable assignment operator

	public: Projector( std::string description, DvdPlayer* dvdPlayer ) :
		_description( description ), _dvdPlayer( dvdPlayer ) { assert( dvdPlayer );
	}
	public: void on() {
		std::cout << _description.c_str() << " on" << std::endl;
	}
	public: void off() {
		std::cout << _description.c_str() << " off" << std::endl;
	}
	public: void wideScreenMode() {
		std::cout << _description.c_str() << " in widescreen mode (16x9 aspect ratio)" << std::endl;
	}
	public: void tvMode() {
		std::cout << _description.c_str() << " in tv mode (4x3 aspect ratio)" << std::endl;
	}
    public: std::string toString() {
		return _description;
    }
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

