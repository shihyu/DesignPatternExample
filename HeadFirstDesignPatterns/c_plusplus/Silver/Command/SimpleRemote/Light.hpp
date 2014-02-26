#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace SimpleRemote {

class Light {

	public: Light() {
	}
	public: void on() const {
		std::cout << "Light is on" << std::endl;
	}
	public: void off() const {
		std::cout << "Light is off" << std::endl;
	}
};

} // namespace SimpleRemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif