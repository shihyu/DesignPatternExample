#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
namespace Template {
namespace Barista {

class CaffeineBeverageWithHook {

 	public: virtual ~CaffeineBeverageWithHook() = 0 {
	}
	public: virtual void prepareRecipe() {
		boilWater();
		brew();
		pourInCup();
		if( customerWantsCondiments() ) {
			addCondiments();
		}
	}
	public: virtual void brew() const = 0;
	public: virtual void addCondiments() const = 0;
	protected: virtual void boilWater() const {
		std::cout << "Boiling water" << std::endl;
	}
	protected: virtual void pourInCup() const {
		std::cout << "Pouring into cup" << std::endl;
	}
	protected: virtual bool customerWantsCondiments() {
		return true;
	}
};

} // namespace Barista
} // namespace Template
} // namespace HeadFirstDesignPatterns

#endif