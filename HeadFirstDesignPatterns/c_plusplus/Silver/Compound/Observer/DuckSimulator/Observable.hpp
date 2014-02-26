#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_OBSERVABLE_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_OBSERVABLE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class Observable : public QuackObservable {

	private: mutable std::vector< Observer* > _observers;
	private: QuackObservable* _duck;
 
	private: Observable( const Observable& ); // Disable copy constructor
	private: void operator=( const Observable& ); // Disable assignment operator

	public: explicit Observable( QuackObservable* duck ) :
		_duck( duck ) { assert( duck );
	}
	public: void registerObserver( Observer* observer ) { assert( observer );
		_observers.push_back( observer );
	}
	public: void notifyObservers() const {
		std::vector< Observer* >::iterator iterator = _observers.begin();
		while( iterator != _observers.end() ) {
			Observer* observer = *iterator++;
			observer->update( _duck );
		}
	}
	public: std::vector< Observer* > getObservers() {
		return _observers;
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif
