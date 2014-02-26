#include "AutoHouse.hpp"

using namespace HeadFirstDesignPatterns::Mediator::AutoHouse;

Mediator::Mediator( unsigned long iterations ) :
	_iterations( iterations ) { assert( iterations > 0 );

	output( "Auto-house is on", true, true );

	_alarm = std::auto_ptr< Alarm >( new Alarm( this ) );
	_calendar = std::auto_ptr< Calendar >( new Calendar( this, iterations ) );
	_coffeePot = std::auto_ptr< CoffeePot >( new CoffeePot( this ) );
	_sprinkler = std::auto_ptr< Sprinkler >( new Sprinkler( this ) );
	_shower = std::auto_ptr< Shower >( new Shower( this ) );
	_weatherStation = std::auto_ptr< WeatherStation >( new WeatherStation( this ) );
}

Mediator::~Mediator()
{
	off();
	output( "Auto-house is off", true, true );
}

void Mediator::on( unsigned long interval ) { assert( interval > 0 );
	_interval = interval;
	_calendar->on( _interval );
}
void Mediator::off() {
	_calendar->off();
	_alarm->off();
	_coffeePot->off();
	_sprinkler->off();
	_shower->off();
	_weatherStation->off();
}
void Mediator::onEvent( const Appliance* appliance, unsigned long value ) const {
	if( appliance == _alarm.get() ) {
		output( "Alarm -- Buzzzzz!" );
		if( _calendar->isWeekDay( _calendar->today() ) ) {
			_coffeePot->on( 2 );
			_sprinkler->off();
			_shower->on( 100 );
#if defined( WIN32 )
			::Sleep( 2000 );
#else
	#error  ::Sleep() undefined for this platform
#endif
			_shower->off();
			_alarm->off();
		}
	}
	else if( appliance == _calendar.get() ) {
		output( "Calendar -- It's " + _calendar->toString(), true, true );
		if( true == _calendar->isTrashDay( value ) ) {
			output( "Calendar -- It's trash day, setting the alarm (early)" );
			_alarm->on( _interval / 4 );	// set alarm (early) on trash day
		}
		else if( true == _calendar->isWeekDay( value ) ) {
			output( "Calendar -- It's a work day, setting the alarm" );
			_alarm->on( _interval / 3 );	// set alarm on work day
		}
		else {
			output( "Calendar -- It's the weekend (no alarm)" );
			_alarm->off();
		}

		if( _weatherStation->isRainning() ) {
			output( "Weather station -- It's duck weather (raining)" );
		}
		else {
			output( "Weather station -- It's nice weather (not raining)" );
			_sprinkler->on( 5 );
		}
	}
	else if( appliance == _coffeePot.get() ) {
		output( "Coffeepot -- finished" );
		_coffeePot->off();
	}
	else if( appliance == _sprinkler.get() ) {
		output( "Sprinkler -- finished" );
		_sprinkler->off();
	}
}

void Mediator::output( std::string value, bool before, bool after ) const
{
	_mutex.acquire();

	if( true == before ) {
		std::cout << std::endl;
	}

	std::cout << value;

	if( true == after ) {
		std::cout << std::endl;
	}

	_mutex.release();
}
