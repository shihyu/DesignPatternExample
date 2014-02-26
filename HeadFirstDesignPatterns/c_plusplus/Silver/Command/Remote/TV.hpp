#ifndef	_HFDP_CPP_COMMAND_REMOTE_TV_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_TV_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class TV {

	private: mutable int _channel;
	private: std::string _location;

	public: explicit TV( const std::string location ) :
		_channel( 0 ), _location( location ) {
	}
	public: void on() const {
		std::cout << _location.c_str() << " TV is on" << std::endl;
	}
	public: void off() const {
		std::cout << _location.c_str() << " TV is off" << std::endl;
	}
	public: void setInputChannel() {
		_channel = 3;
		std::cout << _location.c_str() << " Channel is set for VCR" << std::endl;
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif