#ifndef	_HFDP_CPP_DECORATOR_BEVERAGE_HPP_
#define _HFDP_CPP_DECORATOR_BEVERAGE_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
namespace Decorator {

class Beverage {

 	protected: std::string _description;

	protected: Beverage() : 
		_description( "Unknown Beverage" ) {
	}
	public: virtual ~Beverage() = 0 {
	}
	public: virtual std::string getDescription() const {
		return _description;
	}
	public: virtual double cost() const = 0;
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif