#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_MALLARD_DUCK_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_MALLARD_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class MallardDuck : public Quackable {

	private: std::auto_ptr< Observable > _observable;
 
	private: MallardDuck( const MallardDuck& ); // Disable copy constructor
    private: void operator=( const MallardDuck& ); // Disable assignment operator

	public: MallardDuck() :
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
		return "Mallard Duck";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

