#ifndef	_HFDP_CPP_BRIDGE_SONY_HPP_
#define _HFDP_CPP_BRIDGE_SONY_HPP_

#include "Remotes.hpp"

namespace HeadFirstDesignPatterns {
namespace Bridge {
namespace Remotes {

class Sony : public TV {

	private: std::string _location;

	public: explicit Sony( const std::string& location ) :
		_location( location ) {
	}
	public: void on() {
		std::cout << "Sony " << _location.c_str() << " TV is on" << std::endl;
	}
	public: void off() {
		std::cout << "Sony " << _location.c_str() << " TV is off" << std::endl;
	}
	public: void tuneChannel( unsigned int channel ) {
		std::cout << "Sony " << _location.c_str() << " tuned to channel " << channel << std::endl;
	}
};

} // namespace Remotes
} // namespace Bridge
} // namespace HeadFirstDesignPatterns

#endif