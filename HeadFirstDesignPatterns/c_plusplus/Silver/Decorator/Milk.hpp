#ifndef	_HFDP_CPP_DECORATOR_MILK_HPP_
#define _HFDP_CPP_DECORATOR_MILK_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
namespace Decorator {

class Milk : public CondimentDecorator {

	private: const Beverage* _beverage;

	public: explicit Milk( const Beverage* beverage ) :
		_beverage( beverage ) { assert( beverage );
	}
	public: ~Milk() {
		delete _beverage;
	}
 	public: std::string getDescription() const {
		return _beverage->getDescription() + ", Milk";
	}
 	public: double cost() const {
		return 0.10 + _beverage->cost();
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif