#ifndef	_HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class Hottub {

	private: mutable bool _on;
	private: mutable int _temperature;

	public: Hottub() : 
		_on( false ), _temperature( 0 ) {
	}
	public: void on() const {
		_on = true;
	}
	public: void off() const {
		_on = false;
	}
	public: void bubblesOn() const {
		if( _on ) {
			std::cout << "Hottub is bubbling!" << std::endl;
		}
	}
	public: void bubblesOff() const {
		if( _on ) {
			std::cout << "Hottub is not bubbling" << std::endl;
		}
	}
	public: void jetsOn() const {
		if( _on ) {
			std::cout << "Hottub jets are on" << std::endl;
		}
	}
	public: void jetsOff() const {
		if( _on ) {
			std::cout << "Hottub jets are off" << std::endl;
		}
	}
	public: void setTemperature( int temperature ) { assert( temperature >= 0 );
		_temperature = temperature;
	}
	public: void heat() const {
		_temperature = 105;
		std::cout << "Hottub is heating to a steaming 105 degrees" << std::endl;
	}
	public: void cool() const {
		_temperature = 98;
		std::cout << "Hottub is cooling to 98 degrees" << std::endl;
	}

};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif