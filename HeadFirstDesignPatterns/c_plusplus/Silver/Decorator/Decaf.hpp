#ifndef	_HFDP_CPP_DECORATOR_DECAF_HPP_
#define _HFDP_CPP_DECORATOR_DECAF_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
namespace Decorator {

class Decaf : public Beverage {

  	public: Decaf() {
		_description = "Decaf Coffee";
	}
  	public: double cost() const {
		return 1.05;
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif