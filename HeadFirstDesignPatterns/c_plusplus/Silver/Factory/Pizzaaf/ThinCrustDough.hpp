#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_THIN_CRUST_DOUGH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_THIN_CRUST_DOUGH_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class ThinCrustDough : public Dough {
	public: std::string toString() const {
		return "Thin Crust Dough";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif