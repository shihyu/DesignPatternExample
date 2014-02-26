#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
namespace Template {
namespace Barista {

class CaffeineBeverage {

	public: virtual ~CaffeineBeverage() = 0 {
	}
	public: virtual void prepareRecipe() {
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}
 	protected: virtual void brew() const = 0;
 	protected: virtual void addCondiments() const = 0;
 	private: void boilWater() const {
		std::cout << "Boiling water" << std::endl;
	}
 	private: void pourInCup() const {
		std::cout << "Pouring into cup" << std::endl;
	}
};

} // namespace Barista
} // namespace Template
} // namespace HeadFirstDesignPatterns

#endif