#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_SPRINKLER_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_SPRINKLER_HPP_

namespace HeadFirstDesignPatterns {
namespace Mediator {
namespace AutoHouse {

class Sprinkler : public Appliance {
	private: void* _thread;
	private: unsigned long _threadId;
	private: unsigned long _interval;

	public: Sprinkler( Mediator* mediator ) : 
		Appliance( mediator ) { assert( mediator );
		_thread = 0;
	}
	public: void off() {
		_interval = 0;
		_mediator->output( "Sprinkler is off" );
	}
	public: void on( unsigned long value ) {
		_interval = value;
		_mediator->output( "Sprinkler is on" );
#if defined( WIN32 )
			Sleep( _interval * 1000 );
#else
	#error  Sleep() undefined for this platform
#endif
		onEvent();
	}
	public: void onEvent( unsigned long value = 0 ) const {
		_mediator->onEvent( this, value );
	}
};

} // namespace AutoHouse
} // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif