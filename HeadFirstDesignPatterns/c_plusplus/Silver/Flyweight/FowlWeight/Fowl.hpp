#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_FOWL_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_FOWL_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
namespace FlyWeight {
namespace FowlWeight {

// Flyweight

class Fowl {

	public: const enum type{mallard, redhead, rubber, model, turkey, last};

	protected: Fowl() {
	}
	public: virtual ~Fowl() = 0 {
	}
	public: virtual void quack() const = 0;
	public: virtual void swim() const = 0;
	public: virtual std::string toString() const = 0;
};

} // namespace FowlWeight
} // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif