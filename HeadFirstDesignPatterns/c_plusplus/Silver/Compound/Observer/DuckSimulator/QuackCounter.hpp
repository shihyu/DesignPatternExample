#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_QUACK_COUNTER_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_QUACK_COUNTER_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class QuackCounter : public Quackable {

	private: std::auto_ptr< Quackable > _duck;
	private: static int _numberOfQuacks;
  
	private: QuackCounter( const QuackCounter& ); // Disable copy constructor
	private: void operator=( const QuackCounter& ); // Disable assignment operator

	public: explicit QuackCounter ( Quackable* duck ) :
		_duck( duck ) { assert( duck );
	}
	public: void quack() const {
		_duck->quack();
		_numberOfQuacks++;
	}
	public: static int getQuacks() {
		return _numberOfQuacks;
	}
	public: void registerObserver( Observer* observer) { assert( observer );
		_duck->registerObserver( observer );
	}
	public: void notifyObservers() const {
		_duck->notifyObservers();
	}
	public: std::string toString() const {
		return _duck->toString();
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

