#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class Amplifier {

	private: std::string _description;
	private: Tuner* _tuner;
	private: DvdPlayer* _dvd;
	private: CdPlayer* _cd;
	
	private: Amplifier( const Amplifier& ); // Disable copy constructor
	private: void operator=( const Amplifier& ); // Disable assignment operator

	public: explicit Amplifier( std::string description ) :
		_description( description ), _tuner( 0 ), _dvd( 0 ), _cd( 0 ) {
	}
 	public: void on() const {
		std::cout << _description << " on" << std::endl;
	}
 	public: void off() const {
		std::cout << _description << " off" << std::endl;
	}
 	public: void setStereoSound() {
		std::cout << _description << " stereo mode on" << std::endl;
	}
 	public: void setSurroundSound() {
		std::cout << _description << " surround sound on (5 speakers, 1 subwoofer)" << std::endl;
	}
 	public: void setVolume( int level ) { assert( 0 < level );
		std::cout << _description << " setting volume to " << level << std::endl;
	}
	public: void setTuner( Tuner* tuner) { assert( tuner );
		std::cout << _description << " setting tuner to " << tuner->toString() << std::endl;
		_tuner = tuner;
	}
 	public: void setDvd( DvdPlayer* dvd ) { assert( dvd );
		std::cout << _description << " setting DVD player to " << dvd->toString()<< std::endl;
		_dvd = dvd;
	}
 	public: void setCd( CdPlayer* cd ) { assert( cd );
		std::cout << _description << " setting CD player to " << cd->toString() << std::endl;
		_cd = cd;
	}
	public: std::string toString() const {
		return _description.c_str();
	}
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
