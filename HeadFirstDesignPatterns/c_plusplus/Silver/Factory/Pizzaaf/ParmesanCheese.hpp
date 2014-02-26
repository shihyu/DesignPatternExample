#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PARMESAN_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PARMESAN_CHEESE_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class ParmesanCheese : public Cheese {

	public: std::string toString() const {
		return "Shredded Parmesan";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif