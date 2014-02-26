#ifndef	_HFDP_CPP_COMPOUND_FACTORY_ABSTRACT_DUCK_FACTORY_HPP_
#define _HFDP_CPP_COMPOUND_FACTORY_ABSTRACT_DUCK_FACTORY_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class AbstractDuckFactory {

	public: virtual ~AbstractDuckFactory() = 0 {
	}
	public: virtual Quackable* createMallardDuck() const = 0;
	public: virtual Quackable* createRedheadDuck() const = 0;
	public: virtual Quackable* createDuckCall() const = 0;
	public: virtual Quackable* createRubberDuck() const = 0;
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif