#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_RUBBER_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_RUBBER_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class RubberDuck : public Quackable {

	private: std::auto_ptr< Observable > _observable;
 
	private: RubberDuck( const RubberDuck& ); // Disable copy constructor
    private: void operator=( const RubberDuck& ); // Disable assignment operator

	public: RubberDuck() :
		_observable( new Observable( this ) ) {
	}
	public: void quack() const{
		std::cout << "Squeak" << std::endl;
		notifyObservers();
	}
	public: void registerObserver( Observer* observer ) { assert( observer );
		_observable->registerObserver( observer );
	}
	public: void notifyObservers() const {
		_observable->notifyObservers();
	}
	public: std::string toString() const {
		return "Rubber Duck";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

