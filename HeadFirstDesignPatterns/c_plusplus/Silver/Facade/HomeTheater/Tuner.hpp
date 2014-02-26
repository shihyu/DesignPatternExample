#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class Amplifier;

class Tuner {

	private: std::string _description;
	private: Amplifier* _amplifier;
	private: double _frequency;

	private: Tuner( const Tuner& ); // Disable copy constructor
	private: void operator=( const Tuner& ); // Disable assignment operator

	public: Tuner( std::string description, Amplifier* amplifier ) :
		_description( description ), _amplifier( amplifier ), _frequency( 0.0 ) { assert( amplifier );
	}
	public: void on() {
		std::cout << _description.c_str() << " on" << std::endl;
	}
	public: void off() {
		std::cout << _description.c_str() << " off" << std::endl;
	}
	public: void setFrequency( double frequency ) {
		std::cout << _description.c_str() << " setting frequency to " << _frequency << std::endl;
		_frequency = frequency;
	}
	public: void setAm() {
		std::cout << _description.c_str() << " setting AM mode" << std::endl;
	}
	public: void setFm() {
		std::cout << _description.c_str() << " setting FM mode" << std::endl;
	}
	public: std::string toString() const {
		return _description;
	}
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
