#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_VEGGIES_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_VEGGIES_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Veggies {

	public: virtual ~Veggies() = 0 {
	}
	public: virtual std::string toString() const = 0;
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif