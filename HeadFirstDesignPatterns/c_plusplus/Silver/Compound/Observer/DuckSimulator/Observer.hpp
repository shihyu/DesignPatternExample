#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_OBSERVER_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_OBSERVER_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class QuackObservable;

class Observer {
	public: virtual void update(QuackObservable* duck ) = 0;
	public: virtual ~Observer() = 0 {
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif
