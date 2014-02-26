#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_MEDIATOR_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_MEDIATOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Mediator {
namespace AutoHouse {

//#include <windows.h>

#include <windows.h>

class Mutex
{
    friend class Lock;

	public: Mutex () {
		InitializeCriticalSection( &_critical_section ); 
	}
	public: ~Mutex () {
		DeleteCriticalSection( &_critical_section ); 
	}
	public: void acquire() {
		EnterCriticalSection( &_critical_section);
    }
	public: void release() {
		LeaveCriticalSection( &_critical_section);
    }
	private: CRITICAL_SECTION _critical_section;
};

//class Lock
//{
//	public: Lock ( Mutex& mutex )
//		: _mutex( mutex ) {
//        _mutex.acquire();
//    }
//	public: ~Lock() {
//        _mutex.release();
//    }
//	private: Mutex& _mutex;
//};

// Ommitting the abstract Mediator class. There's no need to define an abstract
// Mediator class when colleagues work with only one mediator. The abstract
// coupling that the Mediator class provides lets collegues work with different
// Mediator subclasses, and vice versa. [Gof] p.278 "Implementation" item #1.

class Alarm;
class Calendar;
class CoffeePot;
class Sprinkler;
class Shower;
class WeatherStation;

class Mediator {

	private: std::auto_ptr< Alarm > _alarm;
	private: std::auto_ptr< Calendar > _calendar;
	private: std::auto_ptr< CoffeePot > _coffeePot;
	private: std::auto_ptr< Sprinkler > _sprinkler;
	private: std::auto_ptr< Shower > _shower;
	private: std::auto_ptr< WeatherStation > _weatherStation;

	private: unsigned long _interval;
	private: unsigned long _iterations;

	private: mutable Mutex _mutex;

	public: Mediator( unsigned long iterations );
	public: ~Mediator();

	public: void on( unsigned long interval );
	public: void onEvent( const Appliance* appliance, unsigned long value ) const;
	public: void off();

	public: void output( std::string value, bool before = false, bool after = true ) const;
};

} // namespace AutoHouse
} // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif