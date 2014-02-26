#ifndef	_HFDP_CPP_DECORATOR_ESPRESSO_HPP_
#define _HFDP_CPP_DECORATOR_ESPRESSO_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
namespace Decorator {

class Espresso : public Beverage {

	public: Espresso() {
		_description = "Espresso";
	}
	public: double cost() const {
		return 1.99;
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif