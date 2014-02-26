#ifndef	_HFDP_CPP_COMPOUND_DECORATOR_GOOSE_HPP_
#define _HFDP_CPP_COMPOUND_DECORATOR_GOOSE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Decorator {

class Goose {

	public: void honk() {
		std::cout << "Honk" << std::endl;
	}
	public: std::string toString() const {
		return "Goose";
	}
};

} // namespace Decorator
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif