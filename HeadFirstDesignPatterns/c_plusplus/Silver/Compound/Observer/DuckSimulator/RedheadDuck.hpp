#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_REDHEAD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class RedheadDuck : public Quackable {

	private: std::auto_ptr< Observable > _observable;
 
	private: RedheadDuck( const RedheadDuck& ); // Disable copy constructor
    private: void operator=( const RedheadDuck& ); // Disable assignment operator

	public: RedheadDuck() :
		_observable( new Observable( this ) ) {
	}
	public: void quack() const{
		std::cout << "Quack" << std::endl;
		notifyObservers();
	}
	public: void registerObserver( Observer* observer ) { assert( observer );
		_observable->registerObserver( observer );
	}
	public: void notifyObservers() const {
		_observable->notifyObservers();
	}
	public: std::string toString() const {
		return "Redhead Duck";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

