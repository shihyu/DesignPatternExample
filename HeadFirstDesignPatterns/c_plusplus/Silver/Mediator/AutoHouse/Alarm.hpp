#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_ALARM_HPP_
#define	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_ALARM_HPP_

#include <windows.h>

namespace HeadFirstDesignPatterns {
namespace Mediator {
namespace AutoHouse {

class Alarm : public Appliance {

	private: void* _thread;
	private: unsigned long _threadId;
	private: unsigned long _interval;

	public: Alarm( Mediator* mediator ) : 
		Appliance( mediator ) {
		_thread = 0;
	}

	public: void onEvent( unsigned long value = 0 ) const {
		_mediator->onEvent( this, value );
	}

	public: void off() {
		if( 0 != _interval ) {
			_mediator->output( "Alarm is off" );
		}
		_interval = 0;
	}

#if defined( WIN32 )
	public: void on( unsigned long value ) {
		if( 0 == _interval ) {
			_mediator->output( "Alarm is on" );
			if( _thread == 0 ) {
				_thread = CreateThread( 0, 0, Alarm::start, this, 0, &_threadId );
			}
		}
		_interval = value;
	}
#else
	#error Alarm::on() undefined for this platform
#endif
	public: static unsigned long __stdcall start( void* self ) { assert( self );
		reinterpret_cast< Alarm* >( self )->run();
		return 0;
	}

#if defined( WIN32 )
	private: void run() {
		Sleep( _interval * 1000 );
		if( 0 != _interval) {	// check if still on
			onEvent();
		}
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
