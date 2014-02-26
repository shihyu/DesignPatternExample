#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PLUMTOMATO_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PLUMTOMATO_SAUCE_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Abstract {

class PlumTomatoSauce : public Sauce {

	public: std::string toString() const {
		return "Tomato sauce with plum tomatoes";
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif