#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_FRESH_CLAMS_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_FRESH_CLAMS_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class FreshClams : public Clams {

	public: std::string toString() const {
		return "Fresh Clams from Long Island Sound";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif