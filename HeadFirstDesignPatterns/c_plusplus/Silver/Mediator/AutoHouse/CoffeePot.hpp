#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_COFFEPOT_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_COFFEPOT_HPP_

namespace HeadFirstDesignPatterns {
namespace Mediator {
namespace AutoHouse {

class CoffeePot : public Appliance {
	private: int _volume;
	private: void* _thread;
	private: unsigned long _threadId;

	public: CoffeePot( Mediator* mediator ) : 
		Appliance( mediator ) { assert( mediator );
		_volume = 0;
		_thread = 0;
	}
	public: void off() {
		_mediator->output( "Coffeepot is off" );
	}
	public: void onEvent( unsigned long value ) const {
		_mediator->onEvent( this, value );
	}
#if defined( WIN32 )
	public: void on( unsigned long value = 1 ) { assert( value > 0 );
		_volume = value;
		_mediator->output( "Coffeepot is on" );

		if( _thread == 0 ) {
			_thread = CreateThread( 0, 0, CoffeePot::start, this, 0, &_threadId );
		}
	}
#else
	#error CoffeePot::on() undefined for this platform
#endif
	public: static unsigned long __stdcall start( void* self ) { assert( self );
		reinterpret_cast< CoffeePot* >( self )->run();
		return 0;
	}
#if defined( WIN32 )
	private: void run() {
		Sleep( 2000 );
		onEvent( _volume );
		_thread = 0;
	}
#else
	#error Alarm::run() undefined for this platform
#endif
};

} // namespace AutoHouse
} // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif