#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace SimpleRemote {

class GarageDoor {

	public: GarageDoor() {
	}
	public: void up() const {
		std::cout << "Garage Door is Open" << std::endl;
	}
	public: void down() const {
		std::cout << "Garage Door is Closed" << std::endl;
	}
	public: void stop() const {
		std::cout << "Garage Door is Stopped" << std::endl;
	}
	public: void lightOn() const {
		std::cout << "Garage light is on" << std::endl;
	}
	public: void lightOff() const {
		std::cout << "Garage light is off" << std::endl;
	}
};

} // namespace SimpleRemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif