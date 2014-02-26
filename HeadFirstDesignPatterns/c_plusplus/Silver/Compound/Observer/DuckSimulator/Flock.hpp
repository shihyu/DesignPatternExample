#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_FLOCK_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_FLOCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class Flock : public Quackable {

	private: mutable std::vector< Quackable* > _ducks;
  
	private: Flock( const Flock& ); // Disable copy constructor
	private: void operator=( const Flock& ); // Disable assignment operator

	public: Flock() {
	}
	public: void add( Quackable* duck ) { assert( duck );
		_ducks.push_back( duck );
	}
	public: void quack() const{
		for( std::vector< Quackable* >::iterator iterator = _ducks.begin(); _ducks.end() != iterator; ++iterator ) {
			Quackable* quacker = *iterator;
			quacker->quack();
		}
	}
	public: void registerObserver(Observer* observer) { assert(observer);
		for( std::vector< Quackable* >::iterator iterator = _ducks.begin(); _ducks.end() != iterator; ++iterator ) {
			Quackable* quacker = *iterator;
			quacker->registerObserver(observer);
		}
	}
	public: void notifyObservers() const {
	}
  	public: std::string toString() const {
		return "Flock of Ducks";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif
