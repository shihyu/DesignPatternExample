#ifndef	_HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
namespace Observer {

class StatisticsDisplay : private Observer, private DisplayElement {

	private: WeatherData* _weatherData;
	private: float _maxTemp;
	private: float _minTemp;
	private: float _tempSum;
	private: int _numReadings;

	private: StatisticsDisplay( const StatisticsDisplay& ); // Disable copy constructor
	private: void operator=( const StatisticsDisplay& ); // Disable assignment operator

	public: explicit StatisticsDisplay( WeatherData* weatherData ) :
		_weatherData( weatherData ), _maxTemp( 0.0 ), _minTemp( 200.0F ), _tempSum( 0.0 ), _numReadings( 0 ) { assert( weatherData );
		_weatherData->registerObserver( this );
	}
	public: ~StatisticsDisplay() {
		_weatherData->removeObserver( this );
	}
	public: void update( float temp, float humidity, float pressure ) {
		_tempSum += temp;
		_numReadings++;

		if( temp > _maxTemp ) {
			_maxTemp = temp;
		}
 
		if( temp < _minTemp ) {
			_minTemp = temp;
		}

		display();
	}
	public: void display() const {
		std::cout.setf( std::ios::showpoint );
		std::cout.precision(3);
		std::cout << "Avg/Max/Min temperature = " << ( _tempSum / _numReadings );
		std::cout << "/" << _maxTemp << "/" << _minTemp << std::endl;
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif