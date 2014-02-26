#ifndef	_HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
namespace Observer {

class ForecastDisplay : private Observer, private DisplayElement {

	private: WeatherData* _weatherData;
	private: float _currentPressure;  
	private: float _lastPressure;

	private: ForecastDisplay( const ForecastDisplay& ); // Disable copy constructor
	private: void operator=( const ForecastDisplay& ); // Disable assignment operator

	public: explicit ForecastDisplay( WeatherData* weatherData ) :
		_weatherData( weatherData ), _currentPressure( 29.92F ), _lastPressure( 0 ) { assert( weatherData );
		weatherData->registerObserver( this );
	}
	public: ~ForecastDisplay() {
		_weatherData->removeObserver( this );
	}
	public: void update( float temp, float humidity, float pressure ) {
        _lastPressure = _currentPressure;
		_currentPressure = pressure;
		display();
	}
	public: void display() const {
		std::cout.setf( std::ios::showpoint );
		std::cout.precision(3);
		std::cout << "Forecast: ";
		if( _currentPressure > _lastPressure ) {
			std::cout << "Improving weather on the way!";
		} else if( _currentPressure == _lastPressure ) {
			std::cout << "More of the same";
		} else if( _currentPressure < _lastPressure ) {
			std::cout << "Watch out for cooler, rainy weather";
		}
		std::cout << std::endl;
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif