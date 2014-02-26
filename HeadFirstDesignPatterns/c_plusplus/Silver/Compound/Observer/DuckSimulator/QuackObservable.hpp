#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_QUACK_OBSERVABLE_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_QUACK_OBSERVABLE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class Observer;

class QuackObservable {

	public: virtual ~QuackObservable() = 0 {
	}
	public: virtual void registerObserver(Observer* observer) = 0;
	public: virtual void notifyObservers() const = 0;
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif