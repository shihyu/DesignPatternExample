#ifndef	_HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_

#include "Remotes.hpp"

namespace HeadFirstDesignPatterns {
namespace Bridge {
namespace Remotes {

class RemoteControl {

	protected: TV* _implementor;

	private: RemoteControl( const RemoteControl& ); // Disable copy constructor
	private: void operator=( const RemoteControl& ); // Disable assignment operator

	protected: RemoteControl() :
		_implementor( 0 ) {
	}
	public: virtual ~RemoteControl() {
		delete _implementor;
	}
	public: virtual void on() { assert( _implementor );
		_implementor->on();
	}
	public: virtual void off() { assert( _implementor );
		_implementor->off();
	}
	protected: virtual void setChannel( unsigned int channel ) { assert( _implementor );
		_implementor->tuneChannel( channel );
	}
};

} // namespace Remotes
} // namespace Bridge
} // namespace HeadFirstDesignPatterns

#endif