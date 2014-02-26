#ifndef	_HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_
#define _HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_

#include "WeatherStation.hpp"
#include <list>

namespace HeadFirstDesignPatterns {
namespace Observer {

class WeatherData : public Subject {

	private: mutable std::list< Observer* > _observers;
	private: float _temperature;
	private: float _humidity;
	private: float _pressure;
	
	private: WeatherData( const WeatherData& ); // Disable copy constructor
	private: void operator=( const WeatherData& ); // Disable assignment operator

	public: WeatherData() :
		_temperature( 0.0 ), _humidity( 0.0 ), _pressure( 0.0 ) {
	}
	public: void registerObserver( Observer* o ) { assert( o );
		_observers.push_back(o);
	}
	public: void removeObserver( Observer* o ) { assert( o );
		_observers.remove(o);
	}
	public: void notifyObservers() const {
		for( std::list< Observer* >::iterator iterator = _observers.begin(); _observers.end() != iterator; ++iterator ) {
			Observer* observer = *iterator;
			observer->update( _temperature, _humidity, _pressure );
		}
	}
	public: void measurementsChanged() {
		notifyObservers();
	}
	public: void setMeasurements( float temperature, float humidity, float pressure ) {
		_temperature = temperature;
		_humidity = humidity;
		_pressure = pressure;
		measurementsChanged();
	}
	
	// other WeatherData methods here
	
	public: float getTemperature() const {
		return _temperature;
	}
	public: float getHumidity() const {
		return _humidity;
	}
	public: float getPressure() const {
		return _pressure;
	}

};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif