#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_TEA_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_TEA_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
namespace Template {
namespace Barista {

class Tea : public CaffeineBeverage {

	public: void brew() const {
		std::cout << "Steeping the tea" << std::endl;
	}
	public: void addCondiments() const {
		std::cout << "Adding Lemon" << std::endl;
	}
};

} // namespace Barista
} // namespace Template
} // namespace HeadFirstDesignPatterns

#endif