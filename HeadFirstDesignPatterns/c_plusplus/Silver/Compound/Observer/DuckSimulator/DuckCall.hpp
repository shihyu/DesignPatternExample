#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_DUCK_CALL_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_DUCK_CALL_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class DuckCall : public Quackable {

	private: std::auto_ptr< Observable > _observable;
 
	private: DuckCall( const DuckCall& ); // Disable copy constructor
	private: void operator=( const DuckCall& ); // Disable assignment operator

	public: DuckCall() : 
		_observable( new Observable( this ) ) {
	}
	public: void quack() const{
		std::cout << "Kwak" << std::endl;
		notifyObservers();
	}
	public: void registerObserver( Observer* observer ) { assert( observer );
		_observable->registerObserver( observer );
	}
	public: void notifyObservers() const {
		_observable->notifyObservers();
	}
	public: std::string toString() const {
		return "Duck Call";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

