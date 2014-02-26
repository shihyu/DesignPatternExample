#ifndef	_HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
namespace Observer {

class CurrentConditionsDisplay : private Observer, private DisplayElement {

	private: Subject* _weatherData;
	private: float _temperature;
	private: float _humidity;

	private: CurrentConditionsDisplay( const CurrentConditionsDisplay& ); // Disable copy constructor
	private: void operator=( const CurrentConditionsDisplay& ); // Disable assignment operator

	public: explicit CurrentConditionsDisplay( Subject* weatherData ) :
		_weatherData( weatherData ), _temperature( 0.0 ), _humidity( 0.0 ) { assert( weatherData );
		_weatherData->registerObserver( this );
	}
	public: ~CurrentConditionsDisplay() {
		_weatherData->removeObserver( this );
	}
	public: void update( float temperature, float humidity, float pressure ) {
		_temperature = temperature;
		_humidity = humidity;
		display();
	}
	public: void display() const {
		std::cout.setf( std::ios::showpoint );
		std::cout.precision(3);
		std::cout << "Current conditions: "	<< _temperature;
		std::cout << " F degrees and " << _humidity;
		std::cout << "% humidity" << std::endl;
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif