#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_COUNTING_DUCK_FACTORY_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_COUNTING_DUCK_FACTORY_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class CountingDuckFactory : public AbstractDuckFactory {

 	public: Quackable* createMallardDuck() const {
		return new QuackCounter( new MallardDuck() );
	}
  	public: Quackable* createRedheadDuck() const {
		return new QuackCounter( new RedheadDuck() );
	}
  	public: Quackable* createDuckCall() const {
		return new QuackCounter( new DuckCall() );
	}
  	public: Quackable* createRubberDuck() const {
		return new QuackCounter( new RubberDuck() );
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

