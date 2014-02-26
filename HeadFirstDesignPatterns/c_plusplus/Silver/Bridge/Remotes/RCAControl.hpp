#ifndef	_HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_

#include "Remotes.hpp"

namespace HeadFirstDesignPatterns {
namespace Bridge {
namespace Remotes {

class RCAControl : public RemoteControl {

	private: unsigned int _currentStation;

	public: explicit RCAControl( const std::string& location ) : 
		_currentStation( 0 ) {
		_implementor = new RCA( location );
	}
	public: void setStation( unsigned int channel ) {
		_currentStation = channel;
		setChannel( _currentStation );
	}
	public: void nextChannel() {
		_currentStation++;
		setChannel( _currentStation );
	}
	public: void previousChannel() {
		_currentStation--;
		setChannel( _currentStation );
	}
};

} // namespace Remotes
} // namespace Bridge
} // namespace HeadFirstDesignPatterns

#endif