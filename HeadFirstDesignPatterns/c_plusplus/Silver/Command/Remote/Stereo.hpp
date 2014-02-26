#ifndef	_HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class Stereo {

	private: std::string _location;
 
	public: explicit Stereo( std::string location ) :
		_location( location ) {
	}
	public: void on() const {
		std::cout << _location.c_str() << " stereo is on" << std::endl;
	} 
	public: void off() const {
		std::cout << _location.c_str() << " stereo is off" << std::endl;
	}
	public: void setCD() const {
		std::cout << _location.c_str() << " stereo is set for CD input" << std::endl;
	}
 	public: void setDVD() const {
		std::cout << _location.c_str() << " stereo is set for DVD input" << std::endl;
	}
	public: void setRadio() const {
		std::cout << _location.c_str() << " stereo is set for Radio" << std::endl;
	}
	public: void setVolume(int volume) const { assert(volume > 0 && volume < 12);
		// code to set the volume
		// valid range: 1-11 (after all 11 is better than 10, right?)
		std::cout << _location.c_str() << " Stereo volume set to " << volume << std::endl;
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif