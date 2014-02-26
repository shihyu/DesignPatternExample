#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_EGGPLANT_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_EGGPLANT_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class Eggplant : public Veggies {

	public: std::string toString() const {
		return "Eggplant";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif