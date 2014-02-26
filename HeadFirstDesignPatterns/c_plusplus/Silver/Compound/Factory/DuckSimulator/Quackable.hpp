#ifndef	_HFDP_CPP_COMPOUND_FACTORY_QUACKABLE_HPP_
#define _HFDP_CPP_COMPOUND_FACTORY_QUACKABLE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class Quackable {

	public: virtual ~Quackable() = 0 {
	}
	public: virtual void quack() const = 0;
	public: virtual std::string toString() const = 0;
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif