#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_GOOSE_ADAPTER_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_GOOSE_ADAPTER_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class GooseAdapter : public Quackable {

	private: std::auto_ptr< Goose > _goose;
	private: std::auto_ptr< Observable > _observable;
 
	private: GooseAdapter( const GooseAdapter& ); // Disable copy constructor
	private: void operator=( const GooseAdapter& ); // Disable assignment operator

	public: explicit GooseAdapter( Goose* goose ) :
		_goose( goose ), _observable( new Observable( this ) ) { assert( goose );
	}
	public: void quack() const{
		_goose->honk();
		notifyObservers();
	}
	public: void registerObserver( Observer* observer ) { assert( observer );
		_observable->registerObserver( observer );
	}
	public: void notifyObservers() const {
		_observable->notifyObservers();
	}
	public: std::string toString() const {
		return "Goose pretending to be a Duck";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif