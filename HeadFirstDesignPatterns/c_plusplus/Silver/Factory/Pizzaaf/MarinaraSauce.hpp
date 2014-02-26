#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_MARINARA_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_MARINARA_SAUCE_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class MarinaraSauce : public Sauce {

	public: std::string toString() const {
		return "Marinara Sauce";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif